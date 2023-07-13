#include "estruturas.h"

int entradaInt()
{
    char entrada[256];
    char *endptr;
    int num;
    fgets(entrada, sizeof(entrada), stdin);
    num = strtol(entrada, &endptr, 10);
    return num;
}

double entradaDouble()
{
    char entrada[256];
    char *endptr;
    double num;
    fgets(entrada, sizeof(entrada), stdin);    
    num = strtod(entrada, &endptr);
    return num;
}

// PILHA

void pilha()
{
    int op = OP_NAO_SELECIONADA;
    int *tamanho = malloc(sizeof(int));
    int *posicao = malloc(sizeof(int));
    double *pilha = malloc(*tamanho * sizeof(double));
    double dado;
    
    *tamanho = 5;
    *posicao = 0;    
    
    while(op == OP_NAO_SELECIONADA)
    {
        pilhaMenu();
        op = entradaInt();

        switch(op)
        {
        case PILHA_OP_PUSH:
            printf("Digite um número a adicionar:\n");
            dado = entradaDouble();
            pilhaPush(pilha, tamanho, posicao, dado);
            break;
        
        case PILHA_OP_POP:
            pilhaPop(pilha, tamanho, posicao);
            break;
        
        case PILHA_OP_MODIFICAR:
            printf("Digite o novo tamanho da pilha:\n");
            *tamanho = entradaInt();
            pilhaModificar(pilha, tamanho, posicao);
            break;
        
        case PILHA_OP_VOLTAR:
            free(tamanho);
            free(posicao);
            free(pilha);
            return;
            break;
        
        default:
            printf("Opção inválida!.\n");
            break;
        }
        op = OP_NAO_SELECIONADA;
    }
}

void pilhaMenu()
{
    printf("Pilha\n");
    printf("%d - Adicionar item\n", PILHA_OP_PUSH);
    printf("%d - Remover item\n", PILHA_OP_POP);
    printf("%d - Modificar tamanho (descarta pilha existente)\n", PILHA_OP_MODIFICAR);
    printf("%d - Voltar\n", PILHA_OP_VOLTAR);
}

void pilhaPush(double *pilha, int *tamanho, int *posicao, double dado)
{
    if(*posicao == *tamanho)
    {
        printf("Pilha cheia!\n");
    }
    else
    {
        printf("%.2lf foi adicionado ao topo da fila.\n", dado);
        pilha[*posicao] = dado;
        *posicao = *posicao + 1;
    }
}

void pilhaPop(double *pilha, int *tamanho, int *posicao)
{
    if(*posicao == 0)
    {
        printf("Fila vazia!\n");
    }
    else
    {
        printf("%.2lf foi retirado do topo da fila.\n", pilha[(*posicao) - 1]);
        *posicao = *posicao - 1;
    }
}

void pilhaModificar(double *pilha, int *tamanho, int *posicao)
{
    free(pilha);
    pilha = malloc(*tamanho * sizeof(double));
    *posicao = 0;
}

// FILA

void fila()
{
    int op = OP_NAO_SELECIONADA;
    int *tamanho = malloc(sizeof(int));
    int *inicio = malloc(sizeof(int));
    int *fim = malloc(sizeof(int));
    double *fila = malloc(sizeof(double));
    double dado;
    
    *tamanho = 5;
    *inicio = 0;
    *fim = 0;
    
    while(op != OP_NAO_SELECIONADA)
    {
        filaMenu();
        op = entradaInt();

        switch (op)
        {
        case FILA_OP_ADICIONAR:
            filaAdicionar();
            break;
        case FILA_OP_REMOVER:
            filaRemover();
            break;
        case FILA_OP_MODIFICAR:
            filaModificar();
            break;
        case FILA_OP_IMPRIMIR:
            filaImprimir();
            break;
        case FILA_OP_VOLTAR:
            free(tamanho);
            free(inicio);
            free(fim);
            free(fila);
            return;
            break;
        default:
            printf("Opção inválida!.\n");
            break;
        }
    }
}

void filaMenu()
{
    system("cls");
    printf("Fila\n");
    printf("%d - Adicionar item\n", FILA_OP_ADICIONAR);
    printf("%d - Remover item\n", FILA_OP_REMOVER);
    printf("%d - Modificar tamanho\n", FILA_OP_MODIFICAR);
    printf("%d - Imprimir fila\n", FILA_OP_IMPRIMIR);
    printf("%d - Voltar\n", FILA_OP_VOLTAR);
}

void filaAdicionar()
{

}

void filaRemover()
{
    
}

void filaModificar()
{
    
}

void filaImprimir()
{
    
}

// LISTA

void listaMenu()
{
    system("cls");
    printf("Lista\n");
    printf("%d - Adicionar item\n", LISTA_OP_ADICIONAR);
    printf("%d - Remover item\n", LISTA_OP_REMOVER);
    printf("%d - Ordenar lista\n", LISTA_OP_ORDENAR);
    printf("%d - Modificar tamanho\n", LISTA_OP_MODIFICAR);
    printf("%d - Imprimir lista\n", LISTA_OP_IMPRIMIR);
    printf("%d - Voltar\n", LISTA_OP_VOLTAR);
}

// LISTA LIGADA

void listaLigadaMenu()
{
    system("cls");
    printf("Lista Ligada\n");
    printf("%d - Adicionar item\n", LISTAL_OP_ADICIONAR);
    printf("%d - Remover item\n", LISTAL_OP_REMOVER);
    printf("%d - Imprimir lista\n", LISTAL_OP_IMPRIMIR);
    printf("%d - Excluir lista\n", LISTAL_OP_EXCLUIR);
    printf("%d - Voltar\n", LISTAL_OP_VOLTAR);
}

// LISTA DUPLAMENTE LIGADA

void listaDuplamenteLigadaMenu()
{
    system("cls");
    printf("Lista Duplamente Ligada\n");
    printf("%d - Adicionar item\n", LISTADL_OP_ADICIONAR);
    printf("%d - Remover item\n", LISTADL_OP_REMOVER);
    printf("%d - Imprimir em ordem crescente\n", LISTADL_OP_IMPRIMIR_C);
    printf("%d - Imprimir em ordem decrescente\n", LISTADL_OP_IMPRIMIR_D);
    printf("%d - Excluir lista\n", LISTADL_OP_EXCLUIR);
    printf("%d - Voltar\n", LISTADL_OP_VOLTAR);
}

// ÁRVORE BINÁRIA

void arvoreBinariaMenu()
{

}
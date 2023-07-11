#include "estruturas.h"

void menuPrincipal();

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR");

    int op = OP_NAO_SELECIONADA;
    
    while(op == OP_NAO_SELECIONADA)
    {
        menuPrincipal();
        op = entradaInt();

        switch (op)
        {
            case OP_PILHA:
                pilha();
                break;
            
            case OP_FILA:
                //fila();
                break;
            
            case OP_LISTA:
                lista();
                break;
            
            case OP_LISTA_LIGADA:
                listaLigada();
                break;
            
            case OP_LISTA_DUPLAMENTE_LIGADA:
                listaDuplamenteLigada();
                break;
            
            case OP_ARVORE_BINARIA:
                arvoreBinaria();
                break;
            
            case OP_SAIR:
                exit(0);
                break;
            
            default:
                printf("Opção inválida.\n");
                break;
        }

        op = OP_NAO_SELECIONADA;
    }
}

void menuPrincipal()
{
    printf("Estruturas de Dados C\n");
    printf("%d - Pilha\n", OP_PILHA);
    printf("%d - Fila\n", OP_FILA);
    printf("%d - Lista\n", OP_LISTA);
    printf("%d - Lista ligada\n", OP_LISTA_LIGADA);
    printf("%d - Lista duplamente ligada\n", OP_LISTA_DUPLAMENTE_LIGADA);
    printf("%d - Árvore binária\n", OP_ARVORE_BINARIA);
    printf("%d - Sair\n", OP_SAIR);
}
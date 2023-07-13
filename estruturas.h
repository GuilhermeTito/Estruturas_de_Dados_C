#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//#include <windows.h> // Apenas para mudar a codificação de texto do terminal para UTF-8

// CONSTANTES
enum
{
    false = 0,
    true
};

// Opções do menu principal
enum
{
    OP_NAO_SELECIONADA = 0,
    OP_PILHA,
    OP_FILA,
    OP_LISTA,
    OP_LISTA_LIGADA,
    OP_LISTA_DUPLAMENTE_LIGADA,
    OP_ARVORE_BINARIA,
    OP_SAIR
};

// Opções do menu da pilha
enum
{
    PILHA_OP_PUSH = 1,
    PILHA_OP_POP,
    PILHA_OP_MODIFICAR,
    PILHA_OP_VOLTAR
};

// Opções do menu da fila
enum
{
    FILA_OP_ADICIONAR = 1,
    FILA_OP_REMOVER,
    FILA_OP_MODIFICAR,
    FILA_OP_IMPRIMIR,
    FILA_OP_VOLTAR
};

// Opções do menu da lista
enum
{
    LISTA_OP_ADICIONAR = 1,
    LISTA_OP_REMOVER,
    LISTA_OP_ORDENAR,
    LISTA_OP_MODIFICAR,
    LISTA_OP_IMPRIMIR,
    LISTA_OP_VOLTAR
};

// Opções do menu da lista ligada
enum
{
    LISTAL_OP_ADICIONAR = 1,
    LISTAL_OP_REMOVER,
    LISTAL_OP_IMPRIMIR,
    LISTAL_OP_EXCLUIR,
    LISTAL_OP_VOLTAR
};

// Opções do menu da lista duplamente ligada
enum
{
    LISTADL_OP_ADICIONAR = 1,
    LISTADL_OP_REMOVER,
    LISTADL_OP_IMPRIMIR_C,
    LISTADL_OP_IMPRIMIR_D,
    LISTADL_OP_EXCLUIR,
    LISTADL_OP_VOLTAR
};

// Opções do menu da árvore binária
/*
enum
{
    
};
*/

// FUNÇÕES

int entradaInt();

//  Pilha
void pilha();
void pilhaMenu();
void pilhaPush(double *pilha, int *tamanho, int *posicao, double dado);
void pilhaPop(double *pilha, int *tamanho, int *posicao);
void pilhaModificar(double *pilha, int *tamanho, int *posicao);

// Fila
void fila();
void filaMenu();
void filaAdicionar();
void filaRemover();
void filaModificar();
void filaImprimir();

// Lista
void lista();
void listaMenu();


// Lista ligada
void listaLigada();
void listaLigadaMenu();

// Lista duplamente ligada
void listaDuplamenteLigada();
void listaDuplamenteLigadaMenu();

// Árvore binária
void arvoreBinaria();
void arvoreBinariaMenu();
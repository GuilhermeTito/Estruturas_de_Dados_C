#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <windows.h> // Apenas para mudar a codificação de texto do terminal para UTF-8

// CONSTANTES
enum
{
    false = 0,
    true
};

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

// FUNÇÕES

int entradaInteira();

void pilha();
void fila();
void lista();
void listaLigada();
void listaDuplamenteLigada();
void arvoreBinaria();
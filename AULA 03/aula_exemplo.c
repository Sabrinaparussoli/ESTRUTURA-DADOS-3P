#include <stdio.h>
#include <stdlib.h>

#define MAX 50 

typedef struct{
    int chave;
    int altura;
    int peso;
}registro;

typedef struct{
    registro vet[MAX+1];
    int numElem;
}lista; 

void inicializarLista(lista* l){
  l->numElem = 0;
} 
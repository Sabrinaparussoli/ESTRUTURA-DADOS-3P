#include <stdlib.h>
#include <stdio.h>

#define TAM 50

typedef struct{

    int item[TAM];
    int topo;

}Tpilha;

void pilhaStar(Tpilha *p){ // iniciando pilha
    p -> topo = -1;

}

int pilhaVazia(Tpilha *p){ // verifica se esta vazia
    if (p -> topo == -1){
        return 1;
    }else{
        return 0;
    }
}

int pilhaCheia(Tpilha *p){ // verifica se esta cheia
    if (p -> topo == TAM -1){
        return 1;
    }else{
        return 0;
    }
}

void pilhaInsert(Tpilha *p, int valor){ // inserindo elemento na pilha
    if(pilhaCheia(p) == 1){
        printf("Pilha esta cheia");
    }else{
        p -> topo++;
        p -> item[p->topo] = valor;
    }
}

int pilhaRemove(Tpilha *p){ // removendo item da pilha
    int auxP;
    if (pilhaVazia(p) == 1)
    {
        printf("Pilha ja esta vazia");
    }else{
        auxP = p -> item[p->topo];
        p -> topo--;
        return auxP;
    }
    
}

int main(){
    Tpilha *p = (Tpilha*)malloc(sizeof(Tpilha));

    pilhaStar(p);

    pilhaInsert(p, 1);
    pilhaInsert(p, 2);
    pilhaInsert(p, 3);
    pilhaInsert(p, 4);
    pilhaInsert(p, 5);

    int itemR;

    itemR = pilhaRemove(p);
    itemR = pilhaRemove(p);
    itemR = pilhaRemove(p);

    printf("Item removido foi = %i", itemR);
    return 0;
}
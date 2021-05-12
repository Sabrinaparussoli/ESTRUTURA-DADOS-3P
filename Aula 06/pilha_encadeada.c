#include<stdio.h>
#include<stdlib.h>

typedef struct reg{ // estrutura da pilha . //typedef é usado para uma referencia, no caso referencia de REG
    int dados;
    struct reg *prox;
}REG;

typedef struct pilha{ //typedef é usado para uma referencia, no caso referencia de PILHA
    REG *topo;
}PILHA;

void startPilha(PILHA *p){ //iniciando pilha
    p->topo = NULL; //pilha recebe nulo
}

void empilha(int valor, PILHA *p){ //empilhando valor
    REG *novoREG = (REG*)malloc(sizeof(REG)); // alocando novo registro no espaço na memoria

    if(novoREG == NULL){ //verificar se foi criado o espaço na memoria
        printf("Erro de alocacao de novo registro");
        return;
    }else{
        novoREG -> dados = valor;
        novoREG -> prox = p -> topo;
        p -> topo = novoREG;
    }
}

int desempilha(PILHA *p){ //desempilhando
    REG *novoREG = p -> topo;
    int dados;
    if (novoREG == NULL)
    {
        printf("a pilha esta vazia");
        return 0;
    }else{
        p -> topo = novoREG ->prox;
        novoREG -> prox = NULL;
        dados = novoREG -> dados;
        free(novoREG);
        return dados;
    }
    
}

void imprimePilha(PILHA *p){
    REG *novoREG = p-> topo;
    if (novoREG == NULL)
    {
        printf("a pilha esta vazia");
        return 0;
    }else{
        while(novoREG != NULL){
            printf("%i", novoREG -> dados);
            novoREG = novoREG -> prox;
        }
        printf("\n");
    }
}

int main(){
    PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));
    if (p1 == NULL)
    {
        printf("erro de alocacao de nova pilha");
        exit (0);
    }else{
        startPilha(p1);

        empilha(76, p1);
        empilha(56, p1);
        empilha(26, p1);
        empilha(86, p1);
        empilha(90, p1);

        imprimePilha(p1);

        printf("\n o valor retirado foi = %i \n", desempilha(p1));

        imprimePilha(p1);
    }
    
}
#include<stdio.h>
#include<stdlib.h>

#define MAX 8

int tam=8;
int grafo[MAX];
int matz[MAX][MAX];
int op;

int grafoTam(){//definindo tamanho grafo
    int tm;
    printf("Escolha a a quantidade de vertices do grafo: ");
    scanf("%i",&tm);
    return tm;
}

void grafoInsert(){//inseriando no vertice e verificando se a quantidade é maior ou menor que o tamanho definido
    int num1, num2;

    printf("Escolha o vertice de origem entre 0 a %i", MAX -1);
    scanf("%i",&num1);  
    printf("Escolha o vertice de origem entre 0 a %i", MAX -1);
    scanf("%i",&num2); 

    if(num1 > tam-1 || num2 < tam-1){
        printf("\n\nOs vertices precisam ser menores %i", tam);
    }else{
        if(num1 < 0 || num2 < 8){
            printf("\n\nOs vertices precisam ser maiores que 0");
        }else{
            matz[num1][num2];
            matz[num2][num1];
        }
    }
}

void grafoDelet(){//removendo do grafo
    int num1, num2;

    printf("Escolha o vertice de origem entre 0 a %i", MAX -1);
    scanf("%i",&num1);  
    printf("Escolha o vertice de origem entre 0 a %i", MAX -1);
    scanf("%i",&num2); 

    if(num1 > tam-1 || num2 < tam-1){
        printf("\n\nOs vertices precisam ser menores %i", tam);
    }else{
        if(num1 < 0 || num2 < 8){
            printf("\n\nOs vertices precisam ser maiores que 0");
        }else{
            matz[num1][num2]=0;
            matz[num2][num1]=0;
        }
    }
}

void grafoImprime(){
    printf("Lista de vertices\n\n");
    int i;
    for(i=0; i<tam; i++){
        printf("%i", grafo[i]);
    }
    print("\n\n");
}

void grafoImprimeMTZ(){
    printf("Matriz de adjacencias \n[\n");
    int l, j;
    for(l=0; l<tam; l++){
        for(j=0; j<tam; j++){
            printf("%i", matz[l][j]);
        }
        printf("]\n\n");

    }
}

void menuGrafo(){
    printf("\nEscolha a opcao: \n");
    printf("\n(1) inserir aresta\n ");
    printf("\n(2) remover aresta\n ");
    printf("\n(3) sair\n");
}

int main(){
    while(tam <= 0 || tam > MAX){
        tam = grafoTam();
        if (tam <= 0 || tam > MAX)
        {
            printf("Escolha um valor entre 1 e %i \n", MAX);
        }else{
            int i;
            for (i = 0; i < tam; i++){
                grafo[i]=i;
            }
        }    
    }

    while(op != 3 ){
        system("cls");
        grafoImprime();
        grafoImprimeMTZ();
        menuGrafo();
        scanf("%i",&op);

        switch (op)
        {
        case 1:
            grafoInsert();
            break;
        case 2:
            grafoDelet();
            break;
        //case 3:

        default:
            printf("Entre com uma opcao valida: ");
            break;
        }
        system("cls");
    }

    return 0;
}
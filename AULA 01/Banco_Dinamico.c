#include <stdio.h>
#include <stdlib.h>
#define agencia 1001
//BANCO DINAMICO
typedef struct
{
  int numAgencia; //numero da agencia 
  int numConta;   // numero da conta corrente
  int saldo; // Saldo da conta corrente
} dados;

int main() {
  int x;
  
  dados* cliente = (dados*) malloc(sizeof(dados));
  cliente->numAgencia = agencia;
  cliente->numConta = 86253;
  cliente->saldo = 203;

  printf("Agencia: %i ", cliente->numAgencia);
  printf("Numero da conta : %i, saldo %i. ", cliente->numConta, cliente->saldo);
  if (cliente->saldo<0) {
    printf("saldo do cliente e negativo.\n");
  }
  else printf("saldo do cliente Ã© positivo.\n");

  printf("%p %p %p\n", &x, &cliente, &(cliente->saldo)); // Imprime o enderco de memoria
 
  return 0;
}
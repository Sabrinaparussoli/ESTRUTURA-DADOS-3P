#include <stdio.h>
#define agencia 1001

typedef struct
{
  int numAgencia; //numero da agencia  
  int numConta;   // numero da conta corrente
  int saldo; // Saldo da conta corrente
} dados;

int main() {
  int x;
  dados cliente;
  cliente.numAgencia = agencia;
  cliente.numConta = 86253;
  cliente.saldo = 203;
  printf("Agencia: %i ", cliente.numAgencia);
  printf("Numero da conta : %i, saldo %i. ", cliente.numConta, cliente.saldo);
  if (cliente.saldo<0) {
    printf("saldo do cliente e negativo.\n");
  }
  else printf("saldo do cliente e positivo.\n");

  printf("%p %p %p\n", &x, &cliente, &(cliente.saldo)); // Imprime o endereço de memora
 
  return 0;
}
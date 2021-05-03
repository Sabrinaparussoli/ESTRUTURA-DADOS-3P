#include <stdio.h>

int main(){
    int x = 64;
    int* y = &x;

	x = x+45;
    *y = 45;

    printf("Valor atual de x: %i\n", x);

    return 0;
}

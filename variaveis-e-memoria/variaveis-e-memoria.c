#include <stdio.h>

int main() {
    
    int a = 10;
    int b, c;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

    b = 20;
    c = a + b;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

    return 0; 
    // é preciso ter um return pois no programa em c ele chama uma função e uma função sempre tem um retorno
    // o zero é um numero que representa um sucesso pro SO

}
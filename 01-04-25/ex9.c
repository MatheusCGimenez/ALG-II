#include <stdio.h>

int verificaSinal(int numero) {
    if (numero >= 0) {
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    int valor, resultado;
    scanf("%d", &valor);

    resultado = verificaSinal(valor);

    printf("%d\n", resultado);
    
    return 0;
}
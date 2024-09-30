#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0, n = 1;
     printf("Digite um numero: ");
     scanf("%d", &numero);
     while (soma < numero) {
        soma += n;
        n++;
    }
if (soma == numero) {
        printf("O numero %d e triangular.\n", numero);
    } else {
        printf("O numero %d nao e triangular.\n", numero);
    }

    return 0;

}

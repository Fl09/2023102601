#include "expressao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char expressaoInfixa[MAX_TAMANHO];
    char expressaoPrefixa[MAX_TAMANHO];

    printf("Digite uma expressao aritmetica na notacao tradicional (infixa): ");
    fgets(expressaoInfixa, MAX_TAMANHO, stdin);
    expressaoInfixa[strcspn(expressaoInfixa, "\n")] = '\0';

    infixToPrefix(expressaoInfixa, expressaoPrefixa);

    printf("Expressao na notacao polonesa prefixa: %s\n", expressaoPrefixa);

    double resultado = avaliarPrefixa(expressaoPrefixa);

    printf("Resultado da expressão: %.2f\n", resultado);

    return 0;
}

#include "expressao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void inicializarPilha(Pilha *pilha) {
    pilha->topo = -1;
}

void empilhar(Pilha *pilha, char elemento) {
    pilha->dados[++pilha->topo] = elemento;
}

char desempilhar(Pilha *pilha) {
    return pilha->dados[pilha->topo--];
}

int isOperador(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int prioridade(char c) {
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    return 0;
}

void infixToPrefix(char *infix, char *prefix) {
    Pilha operadores;
    inicializarPilha(&operadores);
    int tamanho = strlen(infix);
    int j = 0;

    for (int i = tamanho - 1; i >= 0; i--) {
        char atual = infix[i];
        if (isalnum(atual)) {
            prefix[j++] = atual;
        } else if (isOperador(atual)) {
            while (operadores.topo != -1 && prioridade(operadores.dados[operadores.topo]) > prioridade(atual)) {
                prefix[j++] = desempilhar(&operadores);
            }
            empilhar(&operadores, atual);
        } else if (atual == '(') {
            while (operadores.dados[operadores.topo] != ')') {
                prefix[j++] = desempilhar(&operadores);
            }
            desempilhar(&operadores); // Desempilha o ')'
        } else if (atual == ')') {
            empilhar(&operadores, atual);
        }
    }

    while (operadores.topo != -1) {
        prefix[j++] = desempilhar(&operadores);
    }

    // Adiciona o caractere nulo ao final da string resultante
    prefix[j] = '\0';

    // Inverte a string resultante para obter a notação polonesa prefixa correta
    int inicio = 0;
    int fim = j - 1;
    while (inicio < fim) {
        char temp = prefix[inicio];
        prefix[inicio] = prefix[fim];
        prefix[fim] = temp;
        inicio++;
        fim--;
    }
}
double avaliarPrefixa(char *prefixa) {
    Pilha operandos;
    inicializarPilha(&operandos);
    int tamanho = strlen(prefixa);

    for (int i = tamanho - 1; i >= 0; i--) {
        char atual = prefixa[i];

        if (isdigit(atual)) {
            empilhar(&operandos, atual - '0');
        } else if (isOperador(atual)) {
            int op1 = desempilhar(&operandos);
            int op2 = desempilhar(&operandos);

            switch (atual) {
                case '+':
                    empilhar(&operandos, op1 + op2);
                    break;
                case '-':
                    empilhar(&operandos, op1 - op2);
                    break;
                case '*':
                    empilhar(&operandos, op1 * op2);
                    break;
                case '/':
                    empilhar(&operandos, op1 / op2);
                    break;
            }
        }
    }

    return desempilhar(&operandos);
}

void imprimirFormatado(const char* expressao, const char* expressaoPrefixa) {
    printf("%s = %s\n", expressao, expressaoPrefixa);
}

void imprimirExpressaoPrefixa(char *prefixa) {
    int tamanho = strlen(prefixa);
    for (int i = 0; i < tamanho; i++) {
        if (isOperador(prefixa[i])) {
            printf("%c ", prefixa[i]);
        } else {
            printf("%c ", prefixa[i]);
        }
    }
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include"polinomio.h"

Lista* criarLista() {
  Lista* lista = (Lista*)malloc(sizeof(Lista));
    if (lista == NULL) {
        perror("Erro ao alocar memória para a lista");
        exit(EXIT_FAILURE);
    }
    lista->inicio = NULL;
    return lista;
}

void inserirOrdenado(Lista* lista, int coeficiente, inr expoente) {
  Node* novoNo = (Node*)malloc(sizeof(Node));
    if (novoNo == NULL) {
        perror("Erro ao alocar memória para o nó");
        exit(EXIT_FAILURE);
    }
    novoNo->coeficiente = coeficiente;
    novoNo->expoente = expoente;
    novoNo->proximo = NULL;

    if (lista->inicio == NULL || expoente > lista->inicio->expoente) {
        novoNo->proximo = lista->inicio;
        lista->inicio = novoNo;
    } else {
        Node* atual = lista->inicio;

        while (atual->proximo != NULL && expoente < atual->proximo->expoente) {
            atual = atual->proximo;
        }

        novoNo->proximo = atual->proximo;
        atual->proximo = novoNo;
    }
}

void imprimirPolinomio(Lista* P1, Lista* P2) {
  Node* atual = lista->inicio;
    while (atual != NULL) {
        printf("%dx^%d ", atual->coeficiente, atual->expoente);
        if (atual->proximo != NULL) {
            printf("+ ");
        }
        atual = atual->proximo;
    }
    printf("\n");
}

Lista* somaPolinomio (Lista* P1, Lista* P2) {
   Lista* S = criarLista();
    Node* atual1 = P1->inicio;
    Node* atual2 = P2->inicio;

    while (atual1 != NULL || atual2 != NULL) {
        int coef1 = (atual1 != NULL) ? atual1->coeficiente : 0;
        int expo1 = (atual1 != NULL) ? atual1->expoente : INT_MIN;

        int coef2 = (atual2 != NULL) ? atual2->coeficiente : 0;
        int expo2 = (atual2 != NULL) ? atual2->expoente : INT_MIN;

        if (expo1 > expo2) {
            inserirOrdenado(S, coef1, expo1);
            atual1 = atual1->proximo;
        } else if (expo1 < expo2) {
            inserirOrdenado(S, coef2, expo2);
            atual2 = atual2->proximo;
        } else {
            inserirOrdenado(S, coef1 + coef2, expo1);
            atual1 = atual1->proximo;
            atual2 = atual2->proximo;
        }
}
}

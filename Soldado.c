#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Estrutura para o soldado
typedef struct {
    int codigo;
    char nome[20];
    char grau;
} Soldado;

// Estrutura para o nó da lista duplamente ligada
typedef struct No {
    Soldado soldado;
    struct No *anterior;
    struct No *proximo;
} No;

// Estrutura para o deque
typedef struct {
    No *inicio;
    No *fim;
    int tamanho;
} Deque;

// Função para inicializar o deque
void inicializarDeque(Deque *D) {
    D->inicio = NULL;
    D->fim = NULL;
    D->tamanho = 0;
}

// Função para criar um novo nó
No* criarNo(Soldado s) {
    No *novoNo = (No*)malloc(sizeof(No));
    novoNo->soldado = s;
    novoNo->anterior = NULL;
    novoNo->proximo = NULL;
    return novoNo;
}

// Função para inserir no início do deque
bool inserirInicio(Deque *D, Soldado x) {
    No *novoNo = criarNo(x);
    
    if (novoNo == NULL) {
        return false; // Falha na alocação de memória
    }

    if (D->inicio == NULL) {
        D->inicio = novoNo;
        D->fim = novoNo;
    } else {
        novoNo->proximo = D->inicio;
        D->inicio->anterior = novoNo;
        D->inicio = novoNo;
    }

    D->tamanho++;
    return true;
}

// Função para inserir no final do deque
bool inserirFim(Deque *D, Soldado x) {
    No *novoNo = criarNo(x);

    if (novoNo == NULL) {
        return false; // Falha na alocação de memória
    }

    if (D->inicio == NULL) {
        D->inicio = novoNo;
        D->fim = novoNo;
    } else {
        novoNo->anterior = D->fim;
        D->fim->proximo = novoNo;
        D->fim = novoNo;
    }

    D->tamanho++;
    return true;
}

// Função para remover do início do deque
Soldado removerInicio(Deque *D) {
    if (D->inicio == NULL) {
        Soldado soldadoVazio = {-1, "", '\0'};
        return soldadoVazio; // Deque vazio
    }

    No *temp = D->inicio;
    Soldado s = temp->soldado;

    if (D->inicio == D->fim) {
        D->inicio = NULL;
        D->fim = NULL;
    } else {
        D->inicio = D->inicio->proximo;
        D->inicio->anterior = NULL;
    }

    free(temp);
    D->tamanho--;
    return s;
}

// Função para remover do final do deque
Soldado removerFim(Deque *D) {
    if (D->inicio == NULL) {
        Soldado soldadoVazio = {-1, "", '\0'};
        return soldadoVazio; // Deque vazio
    }

    No *temp = D->fim;
    Soldado s = temp->soldado;

    if (D->inicio == D->fim) {
        D->inicio = NULL;
        D->fim = NULL;
    } else {
        D->fim = D->fim->anterior;
        D->fim->proximo = NULL;
    }

    free(temp);
    D->tamanho--;
    return s;
}

// Função para obter o primeiro elemento do deque
Soldado primeiro(Deque *D) {
    if (D->inicio == NULL) {
        Soldado soldadoVazio = {-1, "", '\0'};
        return soldadoVazio; // Deque vazio
    }
    return D->inicio->soldado;
}

// Função para obter o último elemento do deque
Soldado ultimo(Deque *D) {
    if (D->inicio == NULL) {
        Soldado soldadoVazio = {-1, "", '\0'};
        return soldadoVazio; // Deque vazio
    }
    return D->fim->soldado;
}

// Função para contar o número de elementos no deque
int contar(Deque *D) {
    return D->tamanho;
}

// Função para verificar se o deque está vazio
bool vazia(Deque *D) {
    return D->tamanho == 0;
}

// Função para remover o elemento na posição n no deque
Soldado removerPos(Deque *D, int n) {
    if (n < 1 || n > D->tamanho) {
        Soldado soldadoVazio = {-1, "", '\0'};
        return soldadoVazio; // Posição inválida
    }

    No *atual = D->inicio;
    for (int i = 1; i < n; i++) {
        atual = atual->proximo;
    }

    if (atual == D->inicio) {
        return removerInicio(D);
    } else if (atual == D->fim) {
        return removerFim(D);
    } else {
        atual->anterior->proximo = atual->proximo;
        atual->proximo->anterior = atual->anterior;
        Soldado s = atual->soldado;
        free(atual);
        D->tamanho--;
        return s;
    }
}

// Função para resolver o problema de Josephus
void josephus(Deque *soldados, int n) {
    int i = 0;
    while (contar(soldados) > 1) {
        i = (i + n - 1) % contar(soldados) + 1;
        removerPos(soldados, i);
    }
}

int main() {
    // Teste do deque de soldados
    Deque soldados;
    inicializarDeque(&soldados);

    Soldado s1 = {1, "Soldado A", 'A'};
    Soldado s2 = {2, "Soldado B", 'B'};
    Soldado s3 = {3, "Soldado C", 'C'};
    Soldado s4 = {4, "Soldado D", 'D'};
    Soldado s5 = {5, "Soldado E", 'E'};
    Soldado s6 = {6, "Soldado F", 'F'};
    Soldado s7 = {7, "Soldado G", 'G'};
    Soldado s8 = {8, "Soldado H", 'H'};
    Soldado s9 = {9, "Soldado I", 'I'};
    Soldado s10 = {10, "Soldado J", 'J'};

    inserirInicio(&soldados, s1);
    inserirFim(&soldados, s2);
    inserirFim(&soldados, s3);
    inserirFim(&soldados, s4);
    inserirFim(&soldados, s5);
    inserirFim(&soldados, s6);
    inserirFim(&soldados, s7);
    inserirFim(&soldados, s8);
    inserirFim(&soldados, s9);
    inserirFim(&soldados, s10);

    printf("Deque inicial:\n");
    for (No *atual = soldados.inicio; atual != NULL; atual = atual->proximo) {
        printf("Código: %d, Nome: %s, Grau: %c\n", atual->soldado.codigo, atual->soldado.nome, atual->soldado.grau);
    }

    printf("\nRemovendo do início:\n");
    removerInicio(&soldados);
    for (No *atual = soldados.inicio; atual != NULL; atual = atual->proximo) {
        printf("Código: %d, Nome: %s, Grau: %c\n", atual->soldado.codigo, atual->soldado.nome, atual->soldado.grau);
    }

    printf("\nRemovendo do final:\n");
    removerFim(&soldados);
    for (No *atual = soldados.inicio; atual != NULL; atual = atual->proximo) {
        printf("Código: %d, Nome: %s, Grau: %c\n", atual->soldado.codigo, atual->soldado.nome, atual->soldado.grau);
    }

    printf("\nPrimeiro elemento:\n");
    Soldado primeiroSoldado = primeiro(&soldados);
    printf("Código: %d, Nome: %s, Grau: %c\n", primeiroSoldado.codigo, primeiroSoldado.nome, primeiroSoldado.grau);

    printf("\nÚltimo elemento:\n");
    Soldado ultimoSoldado = ultimo(&soldados);
    printf("Código: %d, Nome: %s, Grau: %c\n", ultimoSoldado.codigo, ultimoSoldado.nome, ultimoSoldado.grau);

    printf("\nNúmero de elementos: %d\n", contar(&soldados));

    printf("\nDeque vazio? %s\n", vazia(&soldados) ? "Sim" : "Não");

    // Resolvendo o problema de Josephus
    printf("\nResolvendo o problema de Josephus:\n");
    josephus(&soldados, 3);
    
    printf("\nSoldados eliminados:\n");
    for (No *atual = soldados.inicio; atual != NULL; atual = atual->proximo) {
        printf("Código: %d, Nome: %s, Grau: %c\n", atual->soldado.codigo, atual->soldado.nome, atual->soldado.grau);
    }

    printf("\nSoldado que escapará:\n");
    Soldado escapado = primeiro(&soldados);
    printf("Código: %d, Nome: %s, Grau: %c\n", escapado.codigo, escapado.nome, escapado.grau);

    return 0;
}

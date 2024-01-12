#include <stdio.h>
#include <stdlib.h>

#define M 11

typedef struct {
    int chave;
    int ocupado;
} EntradaHash;

EntradaHash tabela[M];

// Função hash para sondagem linear
int sondagemLinear(int chave, int i) {
    return (chave + i) % M;
}

// Função hash para sondagem quadrática (opções b e c)
int sondagemQuadratica(int chave, int i) {
    return (chave + i * i) % M;
}

// Função hash duplo (opção d)
int hashDuplo(int chave, int i) {
    int h1 = chave % M;
    int h2 = 7 - (chave % 7);
    return (h1 + i * h2) % M;
}

// Inserir chave na tabela usando o método especificado
void inserirChave(int chave, char metodo) {
    int i = 0;
    int indice;

    switch (metodo) {
        case 'a':
            while (1) {
                indice = sondagemLinear(chave, i);
                if (!tabela[indice].ocupado) {
                    tabela[indice].chave = chave;
                    tabela[indice].ocupado = 1;
                    break;
                }
                i++;
            }
            break;
        case 'b':
        case 'c':
            while (1) {
                indice = sondagemQuadratica(chave, i);
                if (!tabela[indice].ocupado) {
                    tabela[indice].chave = chave;
                    tabela[indice].ocupado = 1;
                    break;
                }
                i++;
            }
            break;
        case 'd':
            while (1) {
                indice = hashDuplo(chave, i);
                if (!tabela[indice].ocupado) {
                    tabela[indice].chave = chave;
                    tabela[indice].ocupado = 1;
                    break;
                }
                i++;
            }
            break;
    }
}

// Imprimir a tabela
void imprimirTabela() {
    printf("Índice\tChave\n");
    for (int i = 0; i < M; i++) {
        printf("%d\t", i);
        if (tabela[i].ocupado) {
            printf("%d", tabela[i].chave);
        }
        printf("\n");
    }
}

int main() {
    // Chaves a serem inseridas
    int chaves[] = {365, 112, 180, 213, 13, 27};
    int numChaves = sizeof(chaves) / sizeof(chaves[0]);

    // Inserir chaves usando diferentes métodos
    for (int i = 0; i < numChaves; i++) {
        inserirChave(chaves[i], 'a');
    }
    printf("Tabela após inserção usando sondagem linear:\n");
    imprimirTabela();

    for (int i = 0; i < M; i++) {
        tabela[i].ocupado = 0; // Limpar tabela para os métodos seguintes
    }

    for (int i = 0; i < numChaves; i++) {
        inserirChave(chaves[i], 'b');
    }
    printf("\nTabela após inserção usando sondagem quadrática (opção b):\n");
    imprimirTabela();

    for (int i = 0; i < M; i++) {
        tabela[i].ocupado = 0;
    }

    for (int i = 0; i < numChaves; i++) {
        inserirChave(chaves[i], 'c');
    }
    printf("\nTabela após inserção usando sondagem quadrática (opção c):\n");
    imprimirTabela();

    for (int i = 0; i < M; i++) {
        tabela[i].ocupado = 0;
    }

    for (int i = 0; i < numChaves; i++) {
        inserirChave(chaves[i], 'd');
    }
    printf("\nTabela após inserção usando hash duplo:\n");
    imprimirTabela();

    return 0;
}


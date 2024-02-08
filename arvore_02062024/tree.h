#ifndef TREE_H
#define TREE_H

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct Tree {
    Node* root;
} Tree;

Tree* criarArvore();
void inserir(Tree* arvore, int dado);
void imprimirArvore(Node* no);
int contarElementos(Node* no);
Node* buscar(Node* no, int chave);
void travessiaPreordem(Node* no);
void travessiaEmOrdem(Node* no);
void travessiaPosordem(Node* no);

#endif /TREE_H /

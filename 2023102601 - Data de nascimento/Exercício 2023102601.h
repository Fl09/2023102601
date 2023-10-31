//Criar um tipo abstrato de dados que represente uma pessoa, contendo: nome, data de nascimento e CPF.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
    char dia[3]; 
    char mes[3];     
    char ano[5];
};
typedef struct data Data;

struct pessoa {
    char nome[51]; 
    Data DataNascimento;
    char cpf[12]; 
};
typedef struct pessoa Pessoa;

Data *CriaData(char dia[3], char mes[3], char ano[5]) {
    Data *out = malloc(sizeof(Data));
    strcpy(out->dia, dia);
    strcpy(out->mes, mes);
    strcpy(out->ano, ano);
    return out;
}

int AtribuiData(Data *data, char dia[3], char mes[3], char ano[5]) {
    if (data == NULL) {
        return 0;
    }
    strcpy(data->dia, dia);
    strcpy(data->mes, mes);
    strcpy(data->ano, ano);  return 1;
}

void RelacionarPessoaData(Pessoa *pessoa, Data *DataNascimento) {
    if (pessoa == NULL || DataNascimento == NULL) {
        return; 
    }
    pessoa->DataNascimento = *DataNascimento; 
}

Pessoa *CriaPessoa(char nome[51], char cpf[12]) {
    Pessoa *out = malloc(sizeof(Pessoa));
    strcpy(out->nome, nome);
    strcpy(out->cpf, cpf);
    return out;
}
int AtribuirPessoa(Pessoa *pessoa, char nome[51], char cpf[12]) {
    if (pessoa == NULL) {
        return 0;
    }
    strcpy(pessoa->nome, nome);
    strcpy(pessoa->cpf, cpf);
    return 1;
}

void LerPessoa(Pessoa *pessoa) {
    if (pessoa == NULL) {
        return; 
    }
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de Nascimento: %s/%s/%s\n", pessoa->DataNascimento.dia, pessoa->DataNascimento.mes, pessoa->DataNascimento.ano);
    printf("CPF: %s\n", pessoa->cpf);
}

int main() {
    Pessoa *pessoa;
    Data *data;

    pessoa = CriaPessoa("Flávia", "00000000000");
    data = CriaData("09", "09", "2002");


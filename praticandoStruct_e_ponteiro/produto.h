#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct {
    int id;
    char nome[100];
    char descricao[100];
    float preco_unitario;
    int quantidade_estoque;
} Produto;

#endif
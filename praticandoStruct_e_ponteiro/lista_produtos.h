#ifndef LISTA_PRODUTOS_H
#define LISTA_PRODUTOS_H
#include "produto.h"

void inserir_produto(Produto produtos[], int *quantidade_produtos);
void listar_produtos(Produto produtos[], int quantidade_produtos);
Produto *buscar_produto_por_id(Produto produtos[], int quantidade_produtos, int id);

#endif
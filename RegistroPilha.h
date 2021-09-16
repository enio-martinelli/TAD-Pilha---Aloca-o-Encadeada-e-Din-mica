#ifndef REGISTROPILHA_H
#define REGISTROPILHA_H

#include <iostream>

//Definição do tipo Node
struct Node{
  char info; //local onde será armazenado a informção do elemento
  struct Node *next; //Ponteiro que apontará para o próximo elemento da pilha
};

//Definindo um ponteiro do tipo Node como NodePtr
typedef struct Node *NodePtr;

//Definição do tipo Pilha
struct Pilha{
  NodePtr topo; //Ponteiro que apontará para o elemento do tipo Node que está no topo da Pilha
};

#endif

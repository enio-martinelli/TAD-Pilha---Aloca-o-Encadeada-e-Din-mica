#include <iostream>
#include "RegistroPilha.h"

//Função para criar uma pilha, inicializando-a como vazio
void cria(Pilha *p){
  p->topo=NULL;
}

//Função que verifica se a pilha está vazia
bool vazia(Pilha *p){
  return p->topo==NULL? true:false;
}

//Função que verifica se a pilha está cheia, neste caso, como não há limites para o tamanho da pilha, exceto a quantidade de memória no pc, a função sempre retorna falso
bool cheia(Pilha *p){
  return false;
}

//Função que insere um elemento 'x' no topo da pilha, caso ainda tenha espaço na memória. Retorna true ou false, caso tenha sucesso ou falha 
bool empilha(Pilha *p, char x){
  if(cheia(p)==false){
    NodePtr aux;
    aux = new Node;
    aux->info = x;
    aux->next = p->topo;
    p->topo = aux;
    return true;
  }else 
    return false;
}

//Função que retira o elemento do topo da pilha, e retorna seu valor na varável 'x', caso a pilha não esteja vazia. Retorna true ou false, caso tenha sucesso ou falha 
bool desempilha(Pilha *p, char *x){
  if(vazia(p)==false){
    *x = p->topo->info;
    NodePtr aux = p->topo; 
    p->topo = p->topo->next;
    delete aux;
    return true;
  }else
    return false;
}

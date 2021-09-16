#include <iostream>
#include "Imprime.h"


using std::cout;
using std::endl;
using namespace std;

//Função que retorna quantos elementos a pilha possui

int qntElementos(Pilha *p){
  int contador=0;

  if(vazia(p)){// Caso pilha esteja vazia
    return contador;
  }else{// Caso não esteja vazia

    char a;
  
    Pilha *aux = new Pilha; //Declaração da pilha auxiliar
    cria(aux);

    do{// Desempilha todos os elementos da pilha, um por um, e cada vez que faz isso, acrescenta em 1 o contador e empilha o elementos na pilha aux
      desempilha(p,&a);
      contador++;
      empilha(aux,a);
    }while(vazia(p)==false);

    do{ //Enquanto a pilha auxiliar não estiver vazia, vai desempilhar um elemento e empilhá-lo de volta na pilha principal
      desempilha(aux, &a);
      empilha(p, a);
    }while(vazia(aux)==false);

     delete aux;
    aux=NULL;
  }
  return contador;

}

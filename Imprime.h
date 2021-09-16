#include <iostream>
#include "TADPilha.h"


using std::cout;
using std::endl;
using namespace std;

/*Função que imprime os elementos de um pilha.

->A função retira todos os elementos da pilha, um por um, e a cada elemento retirado, ela imprime o valor desse elemento, que é retornado pela função desempilha, e empilha esse mesmo elemento numa pilha auxiliar chamada 'aux'. Quando a pilha fica fazia, a função repassa todos os elementos da pilha auxiliar de volta para a pilha principal, usando as funções desempilha e empilha.*/
void imprime(Pilha *p){

  Pilha *aux = new Pilha; //Declaração da pilha auxiliar
  cria(aux);
  if(vazia(p)==true){ //Se a pilha estiver vazia apenas imprime uma mensagem informado isto
    cout << "Pilha vazia!!" << endl;
  }else{ //Caso a pilha tenha elementos a serem impressos
    char x;

    cout << "TOPO:" << endl; //Indica o início da pilha

    do{ //Enquanto a pilha principal não estiver vazia, vai desempilhar um elemento, imprimí-lo, e empilhá-lo na pilha auxiliar
      desempilha(p, &x);
      cout << "     " << x << endl;
      empilha (aux, x);
    }while(vazia(p)==false);

    cout << endl << "Fim da Pilha." << endl; //Indica o fim da pilha

    do{ //Enquanto a pilha auxiliar não estiver vazia, vai desempilhar um elemento e empilhá-lo de volta na pilha principal
      desempilha(aux, &x);
      empilha (p, x);
    }while(vazia(aux)==false);
  }
  delete aux;
  aux=NULL;
}

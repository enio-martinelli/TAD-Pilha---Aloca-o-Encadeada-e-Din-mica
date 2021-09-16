//Aluno: Enio da Costa Martinelli
//RA: 790891

#include <iostream>
#include <string>
#include "QuantidadeElementos.h"


using std::cout;
using std::endl;
using namespace std;


int main() {
  //Declarando variáveis de apoio
  char x;
  int contador;

  //Criando e imprimindo um elemento do tipo Pilha
  Pilha *p = new Pilha;
  cria(p);
  cout << "Impressão da Pilha recém criada:" << endl;
  imprime(p);
  cout << "----------------------------------------" << endl;

  //Inserindo elementos na Pilha e imprimindo
  empilha(p, 'A');
  empilha(p, 'B');
  empilha(p, 'C');
  empilha(p, 'D');
  cout << "Pilha após inserção de elementos:" << endl;
  imprime(p);
  contador = qntElementos(p); 
  cout << "Quantidade de elementos na pilha: " << contador << endl;
  cout << "----------------------------------------" << endl;

  
  //Retirando elementos da Pilha e imprimindo
  desempilha(p, &x);
  desempilha(p, &x);
  cout << "Pilha após remoção de elementos:" << endl;
  imprime(p);
  contador = qntElementos(p); 
  cout << "Quantidade de elementos na pilha: " << contador << endl;
  cout << "----------------------------------------" << endl;
  
  //Iserindo elementos após ter retirado alguns, e imprimindo
  empilha(p, 'D');
  cout << "Pilha após nova inserção de elementos:" << endl;
  imprime(p);
  contador = qntElementos(p); 
  cout << "Quantidade de elementos na pilha: " << contador << endl;
  cout << "-------------------------------------------------" << endl;

  //Retirando todos os elementos da Pilha, e imprimindo
  cout << "Impressão da Pilha após remover todos os elementos:" << endl;
  desempilha(p, &x);
  desempilha(p, &x);
  desempilha(p, &x);
  imprime(p);
  contador = qntElementos(p); 
  cout << "Quantidade de elementos na pilha: " << contador << endl;
  cout << "-------------------------------------------------" << endl;

  //Tentando usar a função desempilha em uma Pilha vazia.
  cout << boolalpha; //Imprime os resultados booleanos como "true" ou "false", em vez de 0 ou 1
  cout << "Usando a função 'desempilha' em uma Pilha vazia:" << endl;
  cout << "Função desempilha: " << desempilha(p, &x) << endl;

  //Deletando a Pilha que não será mais usada
  delete p;
  p=NULL;
  
}

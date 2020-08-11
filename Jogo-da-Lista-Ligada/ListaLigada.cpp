#include <cstdlib>
#include <iostream>
#include <sstream>
#include "Celula.h"
#include "ListaLigada.h"

using namespace std;


ListaLigada::ListaLigada() {
  primeiro = NULL;
	qtdCelulas = 0;
}

void ListaLigada::insereInicio(int i){
	Celula * c = new Celula(i);
	c->setProx(primeiro);
  c->setIden(0);
  c->setStatus(0);
  c->setMudanca(0);
  c->setPts_add(0);
	primeiro = c;
}

void ListaLigada::imprime() {
	Celula * cursor = primeiro;
  cout<<"\nLista = ";
	while (cursor != NULL) {
		cout << cursor->getInfo() << ", ";
		cursor = cursor->getProx();
	}
  cursor = primeiro;
  cout<<"\nJogador = ";
  while (cursor != NULL) {
		cout << cursor->getIden() << ", ";
		cursor = cursor->getProx();
	}
  cursor = primeiro;
  cout<<"\nStatus = ";
  while (cursor != NULL) {
		cout << cursor->getStatus() << ", ";
		cursor = cursor->getProx();
	}
  cursor = primeiro;
  cout<<"\nVezes que mudou de invadido para vago = ";
  while (cursor != NULL) {
		cout << cursor->getMudanca() << ", ";
		cursor = cursor->getProx();
	}
  cursor = primeiro;
  cout<<"\nPontos = ";
  while (cursor != NULL) {
		cout << cursor->getPts() << ", ";
		cursor = cursor->getProx();
	}
}



void ListaLigada::remove(Celula * cursor){
  Celula * anterior = NULL, * atual = primeiro;
  while(atual != NULL && atual->getInfo() != cursor->getInfo()){
    anterior = atual;
    atual = atual->getProx();
  }
  if(anterior == NULL){
        primeiro = primeiro->getProx();
        delete atual;
  }
  else{
     anterior->setProx(atual->getProx());
     delete atual;
  }
}


void ListaLigada::jogada(int pos,int cont_jog,int * pts_jogs,int &elem){
  Celula * cursor = primeiro;
  for(int i = 1; i < pos; i++){
    cursor = cursor->getProx();
  }

  if(cursor->getStatus() == 0){
    cursor->setStatus(1);
    cursor->setIden(cont_jog);
  }
  else if(cursor->getStatus() == 1 && cursor->getIden() != cont_jog){
    cursor->setStatus(0);
    cursor->setIden(0);
    cursor->setMudanca(1);
    if(cursor->getMudanca() == 3){
      cout<<"\n\nO elemento"<<cursor->getInfo()<<" será removido, pois mudou de invadido para vago 3 vezes.\n\n";
      remove(cursor);
      elem--;
    }
  }
  else if(cursor->getStatus() == 1 && cursor->getIden() == cont_jog){
    cursor->setStatus(2);
    cursor->setPts_add(1);
    pts_jogs[cont_jog - 1] += 1; 
  }
  else if(cursor->getStatus() == 2 && cursor->getIden() != cont_jog){
    if(cursor->getPts() != 1){
      cursor->setPts_sub(1);
    }
  }
  else if(cursor->getStatus() == 2 && cursor->getIden() == cont_jog){
    cursor->setPts_add(1);
  }
}

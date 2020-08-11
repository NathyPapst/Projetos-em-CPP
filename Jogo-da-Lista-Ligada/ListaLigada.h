#include <iostream>
#include <string.h>
#include "Celula.h"

using namespace std;

class ListaLigada {
	
	//= privado
	private:
	Celula * primeiro;
	int qtdCelulas;
	
	//= publico
	public:
	ListaLigada();
  void insereInicio(int i);
  void imprime();
  void jogada(int pos,int cont_jog,int * pts_jogs,int &elem);
  void remove(Celula * cursor);
};
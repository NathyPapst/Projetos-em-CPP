#include <iostream>
using namespace std;
#ifndef TADFILA_H
#define TADFILA_H
#define tam 10

class TadFila{
  private:
    int numeros[tam];
    int inicio;
    int fim;
    int cont;
  public:
    TadFila();
    bool inserir(int n);
    int extrair();
    int localizar(int n);
    int quantidade();
    void imprimir();
    bool cheia();
    bool vazia();
    bool consulta(int &n);
    bool ordenada_cres();
    bool ordenada_decres();
};

#endif
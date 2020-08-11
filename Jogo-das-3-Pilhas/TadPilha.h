#include <iostream>
using namespace std;
#ifndef TADPILHA_H
#define TADPILHA_H
#define tam 10

class TadPilha{
  private:
    int vetor[tam];
    int topo;
  public:
    TadPilha();
    bool push(int n);
    void pop();
    void imprimir();
    bool vazia();
    bool cheia();
    bool ordenada_cres();
    bool ordenada_decres();
    bool top(int &item);
    void extrair(int &item);
};

#endif
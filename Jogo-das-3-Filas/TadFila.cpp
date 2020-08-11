#include "TadFila.h"

//FILA
TadFila::TadFila(){
  cont = 0;
  inicio = 0;
  fim = tam -1;
}

//FUNÇÃO INSERE
bool TadFila::inserir(int item){
  if(cheia()==true){
    cout<<"\nA sua fila está cheia. Não é possível inserir elementos\n";
    return false;
  }
  if(fim==tam-1){
    fim=0;
  }
  else{
    fim++;
  }
  numeros[fim]=item;
  cont++;
  return true;
}

//FUNÇÃO EXTRAIR
int TadFila::extrair(){
  if(vazia()==true){
    return 0;
  }
  if(inicio==tam-1){
    inicio=0;
  }
  else{
    inicio++;
  }
  cont--;
  return 1;
}

//FUNÇÃO IMPRIMIR
void TadFila::imprimir(){
  TadFila aux;
  int x;
  while(vazia()==false){
    consulta(x);
    cout<<x<<"; ";
    aux.inserir(x);
    extrair();
  }
  while(aux.vazia()==false){
    aux.consulta(x);
    inserir(x);
    aux.extrair();
  }
}

//FUNÇÃO CHEIA
bool TadFila::cheia(){
  if(cont==tam){
    return true;
  }
  else{
    return false;
  }
}

//FUNÇÃO VAZIA
bool TadFila::vazia(){
  if(cont==0){
    return true;
  }
  else{
    return false;
  }
}

//FUNÇÃO CONSULTA
bool TadFila::consulta(int &item){
  if(vazia()==true){
    return false;
  }
  else{
    item=numeros[inicio];
    return true;
  }
}

//FUNÇÃO ORDENADA CRESCENTE
bool TadFila::ordenada_cres(){
  for(int i=inicio; i<=fim-1; i++){
    if(numeros[i]>numeros[i+1]){
      return false;
    } 
  }
  return true;
}

//FUNÇÃO ORDENADA DECRESCENTE
bool TadFila::ordenada_decres(){
  for(int i=inicio; i<=fim-1; i++){
    if(numeros[i]<numeros[i+1]){
      return false;
    }
  }
  return true;
}
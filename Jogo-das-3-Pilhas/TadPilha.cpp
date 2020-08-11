#include "TadPilha.h"

TadPilha::TadPilha(){
  topo = -1;
}

bool TadPilha::cheia(){
  if (topo+1>=tam){
    return true;
  }
    return false;
}

bool TadPilha::push(int n){
  if(cheia()==true){
    cout<<"Sua pilha está cheia, você não pode adicionar elementos a ela.";
    return false;
  }
  else{
    vetor[topo+1]=n;
    topo=topo+1;
    return true;
  }
}

void TadPilha::pop(){
  if(topo==-1){
  }
  else{
    topo-=1;
    cout<<"\nExtraído com sucesso.\n";
  }  
}

void TadPilha::imprimir(){
  for (int i=0; i<=topo; i++){
    cout<<vetor[i]<<", ";
  }
}

bool TadPilha::vazia(){
  if (topo==-1){
    return true;
  }
  else{
    return false;
  }
}

bool TadPilha::top(int &item){
  if(topo+1==0){
    cout<<"A pilha está vazia.\n";
    return false;
  }
  else{
   item=vetor[topo];
   return true;
  }
}

bool TadPilha::ordenada_cres(){
  if((topo-1)>=0){
    for(int i=0; i<=(topo-1); i++){
      if(vetor[i]<vetor[i+1]){
        return false;
      }
    }
  }
    return true;
}

bool TadPilha::ordenada_decres(){
  if((topo-1)>=0){
    for(int i=0; i<=(topo-1); i++){
      if(vetor[i]>vetor[i+1]){
        return false;
      }
    }
  }  
  return true;
}

void TadPilha::extrair(int &item){
  top(item);
  pop();
}

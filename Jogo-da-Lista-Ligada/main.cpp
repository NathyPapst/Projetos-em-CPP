//Nathalia do Valle Papst
//3D
//31919928

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "ListaLigada.h"
using namespace std;

int main() {
  int elem,n_jog,jogadas,pos,start,aux;
  int cont_jog = 0, maior = 0, cont = 0, cont_jogadas = 0;

  cout<<"\n\nBem vindo ao Jogo da Lista Ligada!\nPara começarmos, por favor insira o número de jogadores, de jogadas por jogador e a quantidade de elementos.";
  cout<<"\n\nQuantidade de elementos: ";
  cin>>elem;
  cout<<"\nNúmero de jogadores: ";
  cin>>n_jog;
  cout<<"\nQuantidade de jogadas por jogador: ";
  cin>>jogadas;

  int * pts_jogs = new int[n_jog];
  for(int j = 0; j < n_jog; j++){
    pts_jogs[j] = 0; 
  }
  
  ListaLigada * Lista;
  Lista = new ListaLigada();

  aux = elem;
  for(int i = 0; i < elem; i++){
    Lista->insereInicio(aux);
    aux--;
  }
  Lista->imprime(); 
  while(cont_jogadas < jogadas){  
    cont_jog = 1;

      for(int k = 0; k < n_jog; k++){
        cout<<"\n\nVez do jogador "<<cont_jog<<endl;
        cout<<"\n\nAperte 1 e enter para começar: ";
        cin>>start;
        while(start != 1){
          cout<<"\nOpção inválida! Digite novamente: ";
          cin>>start;
        }
        if(start == 1){
        pos = rand() % elem + 1; 
        cout<<"\n\nA posição é "<<pos<<endl;
        Lista->jogada(pos,cont_jog,pts_jogs,elem);
        Lista->imprime();
        cont_jog++;
      }
    }
    cont_jogadas++;
  }  
  cout<<"\n\nFim de jogo!\n\nResultados: \n";
  Lista->imprime(); 
  cout<<"\n\nPontos dos jogadores: \n\n";
  for(int l = 0; l < n_jog; l++){
    if(pts_jogs[l] > maior){
      maior = pts_jogs[l];
    }
    cout<<"Jogador "<<l + 1<<" = "<<pts_jogs[l]<<endl;
  }
  for(int m = 0; m < n_jog; m++){
    if(pts_jogs[m] == maior){
      cont++;
    }
  }
  if(cont == 1){
    for(int n = 0; n < n_jog; n++){
      if(pts_jogs[n] == maior){
        cout<<"\n\nParabéns Jogador "<<n + 1<<". Você é o ganhador!!";
      }
    }
  }
  else{
    cout<<"\nÉ um empate!!";
  }
  return 0;    
}  
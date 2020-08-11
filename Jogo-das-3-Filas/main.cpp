//Nathalia do Valle Papst
//31919928
//3D

#include <iostream>
using namespace std;
#include "TadFila.h"

int main(){
  TadFila F1,F2,F3;
  int a,b,item,jogadas=0;
  int rand(void);
  while(F1.cheia()==false){
    F1.inserir(rand() % 100 + 1);
  }
  

  int opc;
  while(true){
    b=0;
    jogadas+=1;
    cout<<"F1 = ";
    F1.imprimir();
    cout<<"\nF2 = ";
    F2.imprimir();
    cout<<"\nF3 = ";
    F3.imprimir();
    cout<<"\n\n";
    cout<<"\n0) Sair do jogo: ";
    cout<<"\n1) Movimentar: ";
    cout<<"\n\nInsira uma opção: ";
    cin>>opc;

    //OPÇÃO 0
    if(opc==0){
      cout<<"\nPrograma encerrado";
      break;
    }

    //OPÇÃO 1
    else if(opc==1){
      int fila_out,x,fila_in;
      cout<<"\nDigite de qual fila deseja retirar um elemento: ";
      cin>>fila_out;

    //VALIDAÇÃO DAS FILAS
      while(b<=2){
        if(fila_out == 1){
          while(F1.vazia()!=0){
            cout<<"\nEssa pilha está vazia. Digite novamente: ";
            cin>>fila_out;
            if(fila_out!=1){
              break;
            }
          }
          b+=1;
        }
        if(fila_out == 2){
          while(F2.vazia()!=0){
            cout<<"\nEssa pilha está vazia. Digite novamente: ";
            cin>>fila_out; 
            if(fila_out!=2){
              break;
            } 
          }
          b+=1;
        }
        if(fila_out == 3){
          while(F3.vazia()!=0){
            cout<<"\nEssa pilha está vazia. Digite novamente: ";
            cin>>fila_out; 
            if(fila_out!=3){
              break;
            }
          }
          b+=1;
        }
      }

    //CONTINUAÇÃO
      if(fila_out==1){
        F1.consulta(x);
        F1.extrair();
        cout<<"\nInsira a fila que deseja inserir o elemento que foi extraído: ";
        cin>>fila_in;
        while(fila_in==1){
          cout<<"\nMovimento inválido. Digite novamente: ";
          cin>>fila_in;
        }
        if(fila_in==2){
          F2.inserir(x);
          if(F1.vazia()==1 && F3.vazia()==1){
            F2.ordenada_cres();
            F2.ordenada_decres();
            if(F2.ordenada_cres()==true || F2.ordenada_decres()==true){
              cout<<"\nParabéns!! Sua fila está ordenada! Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
        else if(fila_in==3){
          F3.inserir(x);
          if(F1.vazia()==1 && F2.vazia()==1){
            F3.ordenada_cres();
            F3.ordenada_decres();
            if(F3.ordenada_cres()==true || F3.ordenada_decres()==true){
              cout<<"\nParabéns!! Sua fila está ordenada! Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
      }
      else if(fila_out==2){
        F2.consulta(x);
        F2.extrair();
        cout<<"\nInsira a fila que deseja inserir o elemento que foi extraído: ";
        cin>>fila_in;
        while(fila_in==2){
          cout<<"\nMovimento inválido. Digite novamente: ";
          cin>>fila_in;
        }
        if(fila_in==1){
          F1.inserir(x);
          if(F2.vazia()==1 && F3.vazia()==1){
            F1.ordenada_cres();
            F1.ordenada_decres();
            if(F1.ordenada_cres()==true || F1.ordenada_decres()==true){
              cout<<"\nParabéns!! Sua fila está ordenada! Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
        else if(fila_in==3){
          F3.inserir(x);
          if(F1.vazia()==1 && F2.vazia()==1){
            F3.ordenada_cres();
            F3.ordenada_decres();
            if(F3.ordenada_cres()==true || F3.ordenada_decres()==true){
              cout<<"\nParabéns!! Sua fila está ordenada! Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
      }
      else if(fila_out==3){
        F3.consulta(x);
        F3.extrair();
        cout<<"\nInsira a fila que deseja inserir o elemento que foi extraído: ";
        cin>>fila_in;
        while(fila_in==3){
          cout<<"\nMovimento inválido. Digite novamente: ";
          cin>>fila_in;
        }
        if(fila_in==1){
          F1.inserir(x);
          if(F2.vazia()==1 && F3.vazia()==1){
            F1.ordenada_cres();
            F1.ordenada_decres();
            if(F1.ordenada_cres()==true || F1.ordenada_decres()==true){
              cout<<"\nParabéns!! Sua fila está ordenada! Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
        else if(fila_in==2){
          F2.inserir(x);
          if(F1.vazia()==1 && F3.vazia()==1){
            F2.ordenada_cres();
            F2.ordenada_decres();
            if(F2.ordenada_cres()==true || F2.ordenada_decres()==true){
              cout<<"\nParabéns!! Sua fila está ordenada! Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
      }

    }
      
  }
}
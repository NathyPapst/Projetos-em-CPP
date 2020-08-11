//Nathalia do Valle Papst
//31919928
//3D

#include <iostream>
using namespace std;
#include "TadPilha.h"

int main(){
  TadPilha P1,P2,P3;
  int item;
  int b=0;
  int rand(void), jogadas=0;
  while (P1.cheia()==false){
    P1.push(rand() % 100 + 1);
    
}
  int opc;
  while(true){
    b=0;
    jogadas+=1;
    cout<<"P1 = ";
    P1.imprimir();
    cout<<"\nP2 = ";
    P2.imprimir();
    cout<<"\nP3 = ";
    P3.imprimir();
    cout<<"\n\n0) Sair do jogo: ";
    cout<<"\n1) Movimentar: ";
    cout<<"\n\nInsira uma opção: ";
    cin>>opc;

    //OPÇÃO 0
    if(opc==0){
      cout<<"\nPrograma encerrado.\n";
      break;
    }

    //OPÇÃO 1
    else if(opc==1){
      int pil,x,pil2;
      cout<<"\nInsira qual a pilha de que deseja extrair um elemento: ";
      cin>>pil;

    //VALIDAÇÃO DAS PILHAS
      while(b<=2){
        if(pil == 1){
          while(P1.vazia()!=false){
            cout<<"\nEssa pilha está vazia. Digite novamente: ";
            cin>>pil;
            if(pil!=1){
              break;
          }
      }
          b+=1;
      }
      if(pil == 2){
        while(P2.vazia()!=false){
          cout<<"\nEssa pilha está vazia. Digite novamente: ";
          cin>>pil; 
          if(pil!=2){
            break;
          } 
        }
        b+=1;
      }
     if(pil == 3){
        while(P3.vazia()!=false){
          cout<<"\nEssa pilha está vazia. Digite novamente: ";
          cin>>pil; 
          if(pil!=3){
            break;

          }
        }
        b+=1;
       }
      }

      if(pil==1){
        P1.extrair(x);
        cout<<"\nInsira qual a pilha que deseja inserir o elemento que foi extraido: ";
        cin>>pil2;
        while(pil2==1){
          cout<<"\nMovimento inválido. Digite novamente: ";
          cin>>pil2;
        }
        
        if(pil2==2){
          P2.push(x);
          if(P1.vazia()==true && P3.vazia()==true){
            P2.ordenada_cres();
            P2.ordenada_decres();
            if(P2.ordenada_cres()==true || P2.ordenada_decres()==true){
              cout<<"\nSua pilha está ordenada. Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
        else if(pil2==3){
          P3.push(x);
          if(P1.vazia()==true && P2.vazia()==true){
            P3.ordenada_cres();
            P3.ordenada_decres();
            if(P3.ordenada_cres()==true || P3.ordenada_decres()==true){
              cout<<"\nSua pilha está ordenada. Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
      }

       else if(pil==2){
        P2.extrair(x);
        cout<<"\nInsira qual a pilha que deseja inserir o elemento que foi extraido: ";
        cin>>pil2;
        while(pil2==2){
          cout<<"\nMovimento inválido. Digite novamente: ";
          cin>>pil2;
        }
        if(pil2==1){
          P1.push(x);
          if(P2.vazia()==true && P3.vazia()==true){
            P1.ordenada_cres();
            P1.ordenada_decres();
            if(P1.ordenada_cres()==true || P1.ordenada_decres()==true){
              cout<<"\nSua pilha está ordenada. Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
        else if(pil2==3){
          P3.push(x);
          if(P1.vazia()==true && P2.vazia()==true){
            P3.ordenada_cres();
            P3.ordenada_decres();
            if(P3.ordenada_cres()==true || P3.ordenada_decres()==true){
              cout<<"\nSua pilha está ordenada. Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
       }
      else if(pil==3){
        P3.extrair(x);
        cout<<"\nInsira qual a pilha que deseja inserir o elemento que foi extraido: ";
        cin>>pil2;
        while(pil2==3){
          cout<<"\nMovimento inválido. Digite novamente: ";
          cin>>pil2;
        }
        if(pil2==2){
          P2.push(x);
          if(P1.vazia()==true && P3.vazia()==true){
            P2.ordenada_cres();
            P2.ordenada_decres();
            if(P2.ordenada_cres()==true || P2.ordenada_decres()==true){
              cout<<"\nSua pilha está ordenada. Ela foi ordenada em "<<jogadas<<" jogadas.\n";
            }
          }
        }
        else if(pil2==1){
          P1.push(x);
          if(P2.vazia()==true && P3.vazia()==true){
            P1.ordenada_cres();
            P1.ordenada_decres();
            if(P1.ordenada_cres()==true || P1.ordenada_decres()==true){
              cout<<"\nSua pilha está ordenada. Ela foi ordenada em "<<jogadas<<" jogadas.\n";
          }
        }
      }
    }
  }
}
}
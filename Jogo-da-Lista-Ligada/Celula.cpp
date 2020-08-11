#include <cstdlib>
#include "Celula.h"

Celula::Celula(int i) {
	info =  i;
	prox = NULL;
}

int Celula::getInfo() {
	return info;
}

void Celula::setInfo(int i) {
	info = i;
}

Celula * Celula::getProx() {
	return prox;
}

void Celula::setProx(Celula * p) {
	prox = p;
}

int Celula::getIden(){
  return iden_jog;
}

void Celula::setIden(int i){
  iden_jog = i;
}

int Celula::getStatus(){
  return status;
}

void Celula::setStatus(int i){
  status = i;
}

int Celula::getMudanca(){
  return mudanca;
}

void Celula::setMudanca(int i){
  mudanca += i;
}

int Celula::getPts(){
  return pts;
}

void Celula::setPts_add(int i){
  pts += i;
}

void Celula::setPts_sub(int i){
  pts -= i;
}

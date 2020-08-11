//#ifndef __CELULA__
//#define __CELULA__

#ifndef CELULA_H
#define CELULA_H

class Celula {

	//= privado
	private:
	int info;
	Celula * prox;
  int iden_jog;
  int status;
  int mudanca = 0;
  int pts = 0;

	//= publico
	public:
	Celula(int);
	int  getInfo();
	void setInfo(int);
	Celula * getProx();
	void setProx(Celula * );
  int getIden();
  void setIden(int);
  int getStatus();
  void setStatus(int);
  int getMudanca();
  void setMudanca(int);
  int getPts();
  void setPts_add(int);
  void setPts_sub(int);
};
#endif


#pragma once
#include<iostream>
using namespace std;
using namespace System::Drawing;
class CFigura{
public:
	CFigura(int anchof, int altof); 
	~CFigura();
	void mover(int anchof, int altof);
	//virtual void dibujar(Graphics^ g);
	virtual void dibujar(Graphics^ g){} //si el hijo no desarrolla
	//se usa esta version
	//virtual void dibujar(Graphics^ g) = 0;//no existe un estandar
	//virtual void dibujar(Graphics^ g) abstract;
	char gettipo();
protected:
	int x, y, ancho, alto;
	char tipo;
    int re, gr, bl;
private: //la clase intenta tener privacidad
	int dx, dy;
	int velocidad; //es un atributo de la clase 
};

CFigura::CFigura(int anchof, int altof)
{
	ancho = rand() % 40 + 20;
	alto = rand() % 40 + 20;
	x = rand() % (anchof - ancho);
	y = rand() % (anchof - alto);
	int velocidad = rand() % 3 + 2;
	do { //genera la direccion
		dx = (rand() % 3 - 1)*velocidad;
		dy = (rand() % 3 - 1)*velocidad;
	} while (dx == 0 && dy == 0);
	re = rand() % 255;
	bl = rand() % 255;
	gr = rand() % 255;
	tipo = 'F';
}

CFigura::~CFigura(){}
void CFigura::mover(int anchof, int altof) {
	if (x + dx<0 || x + dx + ancho>anchof || y + dy<0 
		|| y + dy + alto>altof) {
		do { //si sale de pantalla
			//escoge una nueva direccion
			dx = (rand() % 3 - 1) * velocidad;
			dy = (rand() % 3 - 1) * velocidad;
		} while (dx == 0 && dy == 0);
	}//sino sales, se puede mover
	else { x += dx; y += dy; }
}
char CFigura::gettipo() {
	return tipo;
}

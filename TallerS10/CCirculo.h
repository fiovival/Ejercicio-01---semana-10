#pragma once
#include"CFigura.h"
class CCirculo : public CFigura
{
public:
	CCirculo(int anchof, int altof);
	~CCirculo();
	void dibujar(Graphics^ g);
private:

};

CCirculo::CCirculo(int anchof, int altof) :CFigura(anchof, altof){
	tipo = 'C';
	ancho = alto;
}

CCirculo ::~CCirculo(){}
void CCirculo::dibujar(Graphics^ g) {
	g->DrawEllipse(gcnew Pen(Color::FromArgb(re, gr, bl)),
		Rectangle(x, y, ancho, alto));
}
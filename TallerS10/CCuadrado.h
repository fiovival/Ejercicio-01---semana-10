#pragma once
#include"CFigura.h"
class CCuadrado : public CFigura{
public:
	CCuadrado (int anchof, int altof);
	~CCuadrado ();
	void dibujar(Graphics^ g);
private:
};

CCuadrado ::CCuadrado (int anchof, int altof):CFigura(anchof, altof){
	tipo = 'Q';
	ancho = alto;
}

CCuadrado ::~CCuadrado (){}
void CCuadrado::dibujar(Graphics^ g) {
	g->DrawRectangle(gcnew Pen(Color::FromArgb(re, gr, bl)),
		Rectangle(x, y, ancho, alto));
}
#pragma once
#include"CFigura.h"
class CEllipse : public CFigura{
public:
	CEllipse(int anchof, int altof);
	~CEllipse();
	void dibujar(Graphics^ g);
private:

};

CEllipse::CEllipse(int anchof, int altof) :CFigura(anchof, altof)
{
	tipo = 'E';
}

CEllipse ::~CEllipse(){}
void CEllipse::dibujar(Graphics^ g) {
	g->DrawEllipse(gcnew Pen(Color::FromArgb(re, gr, bl)),
		Rectangle(x, y, ancho, alto));
}
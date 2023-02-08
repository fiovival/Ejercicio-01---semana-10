#pragma once
#include"CFigura.h"
class CRombo : public CFigura {
public:
	CRombo(int anchof, int altof);
	~CRombo();
	void dibujar(Graphics^ g);
private:

};

CRombo::CRombo(int anchof, int altof) :CFigura(anchof, altof)
{
	tipo = 'R';
}

CRombo ::~CRombo()
{
}
void CRombo::dibujar(Graphics^ g)
{
	//ese error solo pasa cuando tenemos std;
	cli::array<Point>^ arr = {
      Point(x+ancho/2,y), Point(x+ancho,y+alto/2),
	  Point(x+ancho/2,y+alto), Point(x,y+alto/2)
	};
	g->DrawPolygon(gcnew Pen(Color::FromArgb(re, gr, bl)),
		arr);
}

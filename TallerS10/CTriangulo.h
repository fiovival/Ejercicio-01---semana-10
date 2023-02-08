#pragma once
#include"CFigura.h"
class CTriangulo : public CFigura {
public:
	CTriangulo(int anchof, int altof);
	~CTriangulo();
	void dibujar(Graphics^ g);
private:

};

CTriangulo::CTriangulo(int anchof, int altof) :CFigura(anchof, altof)
{
	tipo = 'T';
}

CTriangulo ::~CTriangulo(){}
void CTriangulo::dibujar(Graphics^ g){
	//ese error solo pasa cuando tenemos std;
	cli::array<Point>^ arr = {
	  Point(x + ancho / 2,y), 
	  Point(x + ancho,y + alto / 2),
	  Point(x,y + alto)
	};
	g->DrawPolygon(gcnew Pen(Color::FromArgb(re, gr, bl)),
		arr);
}

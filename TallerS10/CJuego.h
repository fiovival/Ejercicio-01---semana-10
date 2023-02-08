#pragma once
#include<vector>
#include"CCirculo.h"
#include"CCuadrado.h"
#include"CEllipse.h"
#include"CRombo.h"
#include"CTriangulo.h"
class CJuego{
public:
	CJuego();
	~CJuego();
	//metodos
	void animacion(Graphics^ g);
	void agregar(int anchof, int altof); //es de ancho y del alto del formulario
	void eliminar(char letra);
private:
	vector<CFigura*>vec;
};

CJuego::CJuego(){}
CJuego::~CJuego(){}
void CJuego::animacion(Graphics^ g){
	for (int i = 0; i < vec.size(); i++){
		vec.at(i)->mover(g->VisibleClipBounds.Width
		, g ->VisibleClipBounds.Height);
		vec.at(i)->dibujar(g);
	}
}
void CJuego::agregar(int anchof, int altof) { //es de ancho y del alto del formulario
	switch (rand()%5){
	case 0: vec.push_back(new CTriangulo(anchof,altof));break;
	case 1:	vec.push_back(new CRombo(anchof,altof));break;
	case 2:	vec.push_back(new CEllipse(anchof,altof));break;
	case 3:	vec.push_back(new CCirculo(anchof,altof));break;
	case 4:	vec.push_back(new CCuadrado(anchof,altof));break;
	default:break;
	}
}
void CJuego::eliminar(char letra){
	for (int i = 0; i < vec.size(); i++){
		if (vec.at(i)->gettipo() == letra) {
			delete vec.at(i);
			vec.erase(vec.begin() + 1);
			return;
		}
	}
}

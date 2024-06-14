#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cafe.h"
using namespace std;
class Cafeteria {
private:
	vector<Cafe*> cafes;
public:
	Cafeteria();
	~Cafeteria();
	vector<Cafe*> getVector();
	void setVector(vector<Cafe*> cafes);
	//metodos
	void agregarCafe(Cafe* cafecito);
	void listarCafes();
	void ordenarDecs();
	void ordenarAsc();
	void guardarBebidas();
	void cargarBebidas();

};


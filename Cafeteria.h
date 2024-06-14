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
	/*vector<Estudiante*> Dojo::getVector() {
	return dojoStudents;
}
void Dojo::setVector(vector<Estudiante*> student) {
	this->dojoStudents = student;
}*/
	vector<Cafe*> getVector();
	void setVcetor(vector<Cafe*> cafes);
	void agregarCafe();
	void listarCafes();
	void ordenarDecs();
	void ordenarAsc();
	void guardarBebidad();
	void cargarBebidas();

};


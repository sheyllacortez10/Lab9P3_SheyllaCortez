#include "Cafeteria.h"
#include <iostream>
#include <string>
#include <vector>
#include "Cafe.h"
Cafeteria::Cafeteria() {}
Cafeteria::~Cafeteria() {
	for (Cafe* cafesV : cafes) {
		delete cafesV;
	}
	cafes.clear();
}
vector<Cafe*> Cafeteria::getVector() {
	return cafes;
}
void Cafeteria::setVector(vector<Cafe*> cafes) {
	this->cafes = cafes;
}
void Cafeteria::agregarCafe(Cafe* cafecito) {
	cafes.push_back(cafecito);
	listarCafes();
}
void Cafeteria::listarCafes() {
	cout << "Cafes guardados: " << endl;
	for (int i = 0; i < cafes.size(); i++) {
		cout << i << endl;
		cout << "Tipo: " << cafes[i]->getTipo() << endl;
		cout << "Nivel de Cafe: " << cafes[i]->getNivel()<< endl;
		cout << "Porcentaje de Espuma: " << cafes[i]->getPercentage() << endl;
		cout << "Extra shot: " << cafes[i]->getXshot() << endl;
		cout << "Tama�o: " << cafes[i]->getSize() << endl;
		cout << "Cafe�na: " << cafes[i]->getCafeina()<< endl;
		cout << endl;
	}
}
void Cafeteria::ordenarDecs() {
	listarCafes();
	for (int i = 0; i < cafes.size() - 1; i++) {
		for (int j = 0; j < cafes.size() - i - 1; j++) {
			if (cafes[i]->getNivel() < cafes[j]->getNivel()) {

			}
		}
	}
}
void Cafeteria::ordenarAsc() {
	listarCafes();
	for (int i = 0; i < cafes.size(); i++) {
		for (int j = 0; j < cafes.size(); j++) {
			if (cafes[i]->getNivel() < cafes[j]->getNivel()) {

			}
		}
	}
}
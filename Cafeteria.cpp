#include "Cafeteria.h"
#include <iostream>
#include <string>
#include <vector>
#include "Cafe.h"
#include <fstream>
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
		cout << "Tipo: " << cafes[i]->getTipo() << endl;
		cout << "Nivel de Cafe: " << cafes[i]->getNivel()<< endl;
		cout << "Porcentaje de Espuma: " << cafes[i]->getPercentage() << endl;
		cout << "Extra shot: " << cafes[i]->getXshot() << endl;
		cout << "Tamaño: " << cafes[i]->getSize() << endl;
		cout << "Cafeína: " << cafes[i]->getCafeina()<< endl;
		cout << endl;
	}
}
void Cafeteria::ordenarDecs() {
	listarCafes();
	for (int i = 0; i < cafes.size() - 1; i++) {
		for (int j = 0; j < cafes.size() - i - 1; j++) {
			if (cafes[j]->getCafeina() < cafes[j + 1]->getCafeina()) {
				Cafe* nuevaDesc = cafes[j];
				cafes[j] = cafes[j + 1];
				cafes[j + 1] = nuevaDesc;
			}
		}
	}
	cout << endl;
	cout << "En orden descendente" << endl;
	for (int i = 0; i < cafes.size(); i++) {
		cout << "Tipo: " << cafes[i]->getTipo() << endl;
		cout << "Nivel de Cafe: " << cafes[i]->getNivel() << endl;
		cout << "Porcentaje de Espuma: " << cafes[i]->getPercentage() << endl;
		cout << "Extra shot: " << cafes[i]->getXshot() << endl;
		cout << "Tamano: " << cafes[i]->getSize() << endl;
		cout << "Cafeina: " << cafes[i]->getCafeina() << endl;
		cout << endl;
	}
}
void Cafeteria::ordenarAsc() {
	listarCafes();
	for (int i = 0; i < cafes.size() - 1; i++) {
		for (int j = 0; j < cafes.size() - i - 1; j++) {
			if (cafes[j]->getCafeina() > cafes[j + 1]->getCafeina()) {
				Cafe* nuevoAsc = cafes[j];
				cafes[j] = cafes[j + 1];
				cafes[j + 1] = nuevoAsc;
			}
		}
	}
	cout << "En orden ascendente" << endl;
	for (int i = 0; i < cafes.size(); i++) {
		cout << "Tipo: " << cafes[i]->getTipo() << endl;
		cout << "Nivel de Cafe: " << cafes[i]->getNivel() << endl;
		cout << "Porcentaje de Espuma: " << cafes[i]->getPercentage() << endl;
		cout << "Extra shot: " << cafes[i]->getXshot() << endl;
		cout << "Tamano: " << cafes[i]->getSize() << endl;
		cout << "Cafeina: " << cafes[i]->getCafeina() << endl;
		cout << endl;
	}
}
void Cafeteria::guardarBebidas() {
	ofstream miArchivo;
	miArchivo.open("Cafes.txt", ios::out);
	if (miArchivo.is_open())
	{
		miArchivo << "Tipo,Nivel_cafe,Porcentaje_espuma,Extra_shot,Size,Cafeina" << endl;
		for (Cafe* misCafes: cafes)
		{
			miArchivo << misCafes->getTipo() << "," << to_string(misCafes->getNivel()) << "," << to_string(misCafes->getPercentage())
				<< "," << to_string(misCafes->getXshot()) << "," << misCafes->getSize() << "," << to_string(misCafes->getCafeina()) << endl;
		}
		cout << "Bebidas guardadas exitosamente" << endl;
	}
	miArchivo.close();
}
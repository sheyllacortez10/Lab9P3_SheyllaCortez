#include <iostream>
#include <string>
#include "Cafe.h"
#include "Cafeteria.h"
#include <vector>
using namespace std;
//main
void menu() {
	Cafe* newCafe = new Cafe();
	Cafeteria* Lacafe = new Cafeteria();
	int opEjecutar = 0;
	int cafes = 0;
	while (opEjecutar != 7) { //While principal
		cout << "---- Menu ----" << endl;
		cout << "1. Agregar Cafe" << endl;
		cout << "2. Listar Cafe" << endl;
		cout << "3. Ordenar Descendente" << endl;
		cout << "4. Ordenar Ascendente" << endl;
		cout << "5. Guardar Cafes" << endl;
		cout << "6. Guardar Cafes" << endl;
		cout << "7. Salir" << endl;
		cout << endl;
		cout << "Ingrese la opción que desea realizar: ";
		cin >> opEjecutar;
		cout << endl;
		int micafe = 0;
		int xtraShot = 0;
		int tamano = 0;
		string tipo;
		int shot;
		string tamanoS;
		switch (opEjecutar) { //sw principal
		case 1:
			cout << "Que tipo de cafe desea agregar?" << endl;
			cout << "1.Americano" << endl;
			cout << "2.Capuccino" << endl;
			cout << "3.Latte" << endl;
			cout << "Ingrese el indice del tipo de cafe: ";
			cin >> micafe;
			while ((micafe < 1) || (micafe > 3)) {
				cout << "Ingrese el indice del tipo de cafe: ";
				cin >> micafe;
			}
			cout << "El cafe lleva extra shot?" << endl;
			cout << "0. No" << endl;
			cout << "1. Si" << endl;
			cout << "Ingrese el indice segun el shot de cafe: ";
			cin >> xtraShot;
			while ((xtraShot != 0) && (xtraShot != 1))
			{
				cout << "Ingrese el indice segun el shot de cafe: ";
				cin >> xtraShot;
			}
			cout << "¿Que tamaño tendra el cafe?" << endl;
			cout << "1.Pequeno" << endl;
			cout << "2.Mediano" << endl;
			cout << "3.Grande" << endl;
			cout << "Ingrese el indice del tamano de cafe: ";
			cin >> tamano;
			while (!((tamano >= 1) && (tamano <= 3)))
			{
				cout << "Ingrese el indice del tamano de cafe: ";
				cin >> tamano;
			}
			if (micafe == 1)
			{
				tipo = "Americano";
			}
			else if (micafe == 2) {
				tipo = "Capuccino";
			}
			else if (micafe == 3) {
				tipo = "Latte";
			}
			if (tamano == 1)
			{
				tamanoS = "Pequeño";
			}
			else if (tamano ==2) {
				tamanoS = "Mediano";
			}
			else if (tamano == 3) {
				tamanoS = "Grande";
			}
			newCafe = new Cafe(tipo, xtraShot, tamanoS);
			Lacafe->agregarCafe(newCafe);
			cout << endl;
			cout << "Cafe agregado correctamente" << endl;
			cafes += 1;
			break;
		case 2:
			if (cafes > 0) {
				Lacafe->listarCafes();
			}
			else {
				cout << "Cafes insuficientes" << endl;
			}
			break;
		case 3:
			if (cafes > 0) {
				Lacafe->ordenarDecs();
			}
			else {
				cout << "Cafes insuficientes" << endl;
			}
			break;
		case 4:
			if (cafes > 0) {
				Lacafe->ordenarAsc();
			}
			else {
				cout << "Cafes insuficientes" << endl;
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			cout << "Saliendo del programa" << endl;
			break;
		default:
			cout << "Su opción es inválida" << endl;
			break;
		}
	}
	delete Lacafe;
	delete newCafe;
}
int main() {
    menu();
	return 0;
}
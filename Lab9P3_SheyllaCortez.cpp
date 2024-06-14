#include <iostream>
#include <string>
using namespace std;
//main
void menu() {
	int opEjecutar = 0;
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
		switch (opEjecutar) { //sw principal
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
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
}
int main() {
    menu();
	return 0;
}
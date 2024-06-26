#include "Cafe.h"
int Cafe::nivelRandom() {
	int numero1 = 10;
	int numero2 = 1;
	int random = rand() % numero1 + numero2;
	return random;
}
double Cafe::espumaRandom(int numero1, int numero2){
	double random = (double)rand() / RAND_MAX;
	return random;
}
Cafe::Cafe(){}
Cafe::Cafe(string tipo, int shot, string size){
	this->Tipo = tipo;
	this->Extra_shot = shot;
	this->Size = size;
	setNivel();
	setPercentage();
	setCafeina();
}
Cafe::~Cafe() {
	this->Tipo = "";
	this->Nivel_cafe = 0;
	this->Porcentaje_espuma = 0.0;
	this->Extra_shot = false;
	this->Size = "";
	this->Cafeina = 0.0;
}
string Cafe::getTipo() {
	return Tipo;
}
int Cafe::getNivel() {
	return Nivel_cafe;
}
double Cafe::getPercentage() {
	return Porcentaje_espuma;
}
bool Cafe::getXshot() {
	return Extra_shot;
}
string Cafe::getSize() {
	return Size;
}
double Cafe::getCafeina() {
	return Cafeina;
}
void Cafe::setTipo(string tipo) {
	this->Tipo = tipo;
}
void Cafe::setNivel() {
	this->Nivel_cafe = nivelRandom();
}
void Cafe::setPercentage() {
	if (Tipo == "Americano") {
		this->Porcentaje_espuma = espumaRandom(0.30, 0.0);
	}
	else if (Tipo == "Capuccino") {
		this->Porcentaje_espuma = espumaRandom(0.31, 0.65);
	}
	else if (Tipo == "Latte") {
		this->Porcentaje_espuma = espumaRandom(0.66, 1.0);
	}
}
void Cafe::setXShot(int xshot) {
	if (xshot == 0) {
		this->Extra_shot = false;
	}
	else if (xshot == 1) {
		this->Extra_shot = true;
	}
}
void Cafe::setSize(string size) {
	this->Size = size;
}
void Cafe::setCafeina() {
	this->Cafeina = calcularCafeina();
}
double Cafe::calcularCafeina() {
	double cantCafeina  = 0.0;
	int BaseCafeinaTipo = 0;
	int FactorNivel = 10;
	int FactorEspuma = 50;
	int IncrementoExtraShot = 70;
	double FactorTamano = 0.0;
	//BaseCafeinaTipo
	if (Tipo == "Americano") {
		BaseCafeinaTipo = 80;
	}
	else if (Tipo == "Capuccino") {
		BaseCafeinaTipo = 60;
	}
	else if (Tipo == "Latte") {
		BaseCafeinaTipo = 50;
	}
	//FactorTamano
	if (Size == "Peque�o")
	{
		FactorTamano = 1.0;
	}
	else if (Size == "Mediano") {
		FactorTamano = 1.5;
	}
	else if (Size == "Grande") {
		FactorTamano = 2.0;
	}
	cantCafeina = (BaseCafeinaTipo + Nivel_cafe*FactorNivel - Porcentaje_espuma
		*FactorEspuma + (int)Extra_shot * IncrementoExtraShot) * FactorTamano;
	return cantCafeina;
}

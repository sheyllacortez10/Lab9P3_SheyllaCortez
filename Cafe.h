#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cafe {
private:
	string Tipo;
	int Nivel_cafe;
	double Porcentaje_espuma;
	bool Extra_shot;
	string Size;
	double Cafeina;
public:
	Cafe();
	Cafe(string tipo, int shot, string size);
	~Cafe();
	//getters
	string getTipo();
	int getNivel();
	double getPercentage();
	bool getXshot();
	string getSize();
	double getCafeina();
	//setters
	void setTipo(string tipo);
	void setNivel();
	void setPercentage();
	void setXShot(int xshot);
	void setSize(string size);
	void setCafeina();
	double calcularCafeina();
	int nivelRandom();
	double espumaRandom(int num1, int num2);
};


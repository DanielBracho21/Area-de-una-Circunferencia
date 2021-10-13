#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctype.h>
#include <math.h>
#define M_PI 3.14159265358979323846
using namespace std;

void validar() {
	float radio;
	if (scanf("%f", &radio) != 1) {
		printf("Ingrese un numero valido");
	}
	else {
		float resultado = pow(radio, 2) * M_PI;
		cout << endl;
		printf("El area de la Circunferencia es: " "%f", resultado);
		return;
	}
}

int main() {
	cout << "Area de una Circunferencia" << endl << endl;
	cout << endl;
	cout << "Ingresa el Radio:" << endl;
	cout << endl;
    validar();
	cout << endl;

	return 0;
}
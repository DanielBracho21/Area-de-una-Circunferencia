#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.1416;
	float radio;

	cout << "Area de una Circunferencia" << endl << endl;
	cout << endl;
	cout << "Ingresa el Radio:" << endl;
	cin >> radio;
	cout << endl;
	cout << "El Area de la Circunferencia es: " << endl << (radio * radio) * PI << endl << endl;

	return 0;
}
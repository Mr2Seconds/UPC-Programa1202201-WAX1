/*Funciona para la pregunta y para, mayormente, otras posibles respuestas,
aunque si es un valor que no daría una cantidad igual de espacios, simplemente ajusta el alto a lo necesario.*/

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void main() {
	int col, fil, esp, i, i2, i3, i4, i5;
	cout << "Ingrese un número entero positivo menor a 51, para el ancho." << endl;
	cin >> col;
	if (col > 51) {
		cout << "Número incorrecto." << endl;
	}
	cout << "Ingrese un número entero positivo menor a 18, para el alto." << endl;
	cin >> fil;
	if (fil > 18) {
		cout << "Numero incorrecto." << endl;
	}
	cout << "Ingrese la cantidad de espaciado: " << endl;
	cin >> esp;
	if (esp >= fil) {
		cout << "Numero incorrecto." << endl;
	}
	char cosa;
	cout << "Ingrese un cáracter a imprimir. " << endl;
	cin >> cosa;
	int a = ((fil - 2) - (esp - 1))/ esp;
	if (col <= 51 && fil <= 18) {
		for (i = 1; i <= col; i++) {
			cout << cosa;
		}
		cout << endl;
		if (fil >= 3 && col >= 2) {
			for (int i6 = 1; i6 <= (esp - 1); i6++) {
				for (i2 = 1; i2 <= a; i2++) {
					cout << cosa;
					for (i3 = 1; i3 <= (col - 2); i3++) {
						cout << " ";
					}
					cout << cosa;
					cout << endl;

				}
				for (int i7 = 1; i7 <= col; i7++) {
					cout << cosa;
				}
				cout << endl;
			}
			for (i2 = 1; i2 <= a; i2++) {
				cout << cosa;
				for (i3 = 1; i3 <= (col - 2); i3++) {
					cout << " ";
				}
				cout << cosa;
				cout << endl;
			}
		}
		if (fil >= 3 && col == 1) {
			for (i5 = 1; i5 <= (fil - 2); i5++) {
				cout << cosa << endl;
			}
		}
		if (fil >= 2) {
			for (i4 = 1; i4 <= col; i4++) {
				cout << cosa;
			}
		}
	}
}
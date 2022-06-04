#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void main() {
	/*int num, i;
	int a = 1;
	cout << "Ingrese un número entero positivo menor a 10." << endl;
	cin >> num;
	if (num > 10) {
		cout << "Número incorrecto." << endl;
	}
	else {
		while (num >= a) {
			for (i = 1; i <= a; i++) {
				cout << i;
			}
			cout << endl;
			a++;
		}
	}*/

	/*int num, i;
	cout << "Ingrese un número entero positivo menor a 10." << endl;
	cin >> num;
	char cosa;
	cout << "Ingrese un cáracter a imprimir. " << endl;
	cin >> cosa;
	if (num > 10) {
		cout << "Número incorrecto." << endl;
	}
	else {
		while (num > 0) {
			for (i = 1; i <= num; i++) {
				cout << cosa;
			}
			cout << endl;
			num--;
		}
	}*/

	int col, fil, i, i2, i3, i4, i5;
	cout << "Ingrese un número entero positivo menor a 10, para las columnas." << endl;
	cin >> col;
	cout << "Ingrese un número entero positivo menor a 10, para las filas." << endl;
	cin >> fil;
	char cosa;
	cout << "Ingrese un cáracter a imprimir. " << endl;
	cin >> cosa;
	if (col > 10) {
		cout << "Número incorrecto." << endl;
	}
	if (col <= 10 && fil <= 10) {
		for (i = 1; i <= col; i++) {
			cout << cosa;
		}
		cout << endl;
		if (fil >= 3 && col >= 2) {
			for (i2 = 1; i2 <= (fil - 2); i2++) {
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

	//ancho total = 120
	/*int num, i, i2, i3, i4;
	cout << "Ingrese un número entero positivo menor a 10." << endl;
	cin >> num;
	char cosa;
	cout << "Ingrese un cáracter a imprimir. " << endl;
	cin >> cosa;
	if (num > 10) {
		cout << "Número incorrecto." << endl;
	}
	else {
		for (i = 1; i <= num; i++) {
			cout << cosa;
		}
		cout << endl;
		if (num >= 3) {
			for (i2 = 1; i2 <= (num - 2); i2++) {
				cout << cosa;
				for (i3 = 1; i3 <= (num - 2); i3++) {
					if (i3 == i2) {
						cout << cosa;
					}
					else {
						cout << " ";
					}
				}
				cout << cosa;
				cout << endl;
			}
		}
		if (num >= 2) {
			for (i4 = 1; i4 <= num; i4++) {
				cout << cosa;
			}
		}
	}*/
}
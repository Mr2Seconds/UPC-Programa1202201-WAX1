#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int factorial(int valor) {
	int total = valor;
	for (int i = valor - 1; i > 0; i--) {
		total *= i;
	}
	return total;
}

void main() {
	float total = 0;
	int n;
	cout << "Ingrese la cantidad de términos." << endl;
	cin >> n;
	if (n < 0) {
		exit;
	}
	float ter;
	cout << "Los términos son: " << endl;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			ter = -1.0f *((pow(i, i) + i)/ (3*(i-1) + factorial(i)));
		}
		else {
			ter = ((pow(i, i) + i) / (3 * (i - 1) + factorial(i)));
		}
		cout << ter << " ";
		total += ter;
	}
	cout << endl;
	cout << "El total es: " << total << endl;
}
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int factorial(int valor) {
	int resultado = 1;
	for (int i = 1; i <= valor; i++) {
		resultado *= i;
	}
	return resultado;
}

void main() {
	/*int k;
	float a;
	cout << "Ingrese el valor de k." << endl;
	cin >> k;
	cout << "Ingrese el valor de a." << endl;
	cin >> a;
	float suma = 0;
	if (k <= 20) {
		for (int i = 0; i <= k; i++) {
			suma += powf(a, float(i)) / factorial(i);
		}
		cout << "El resultado de e será: " << suma << endl;
	}
	else {
		cout << "Valor de k incorrecto." << endl;
	}*/

	float total = 0;
	int gratis = 0;
	string t_pizza = " ";
	int e_delivery = 0;
	int e_mostrador = 0;
	float e_p_d = 0;
	float e_p_m = 0;
	float t_e_d = 0;
	float t_e_m = 0;

	int grande = 0;
	int familiar = 0;
	int superfamiliar = 0;
	int code, time, pizza;
	char type;
	bool isGratis = false;
	for (int i = 1; i++;) {
		isGratis = false;
		cout << "Ingrese el código " << endl;
		cin >> code;
		if (code == 0) {
			break;
		}
		cout << "Tipo de pizza (1: Grande, 2: Familiar, 3: Superfamiliar): " << endl;
		cin >> pizza;

		if (pizza == 0) {
			break;
		}
		if (pizza > 3) {
			break;
		}
		cout << "Tipo de pedido (D: delivery; M: Mostrador): " << endl;
		cin >> type;
		cout << "Tiempo de entrega: " << endl;
		cin >> time;

		if (type == 'M') {
			e_mostrador++;
			t_e_m += time;
		}
		else if (type == 'D') {
			e_delivery++;
			t_e_d += time;
		}
		else {
			"Tipo incorrecto.";
		}

		if (type == 'M' && time > 20) {
			gratis++;
			isGratis = true;
			cout << "Importe a pagar: GRATIS " << endl;
		}
		else if (type == 'D' && time > 30) {
			gratis++;
			isGratis = true;
			cout << "Importe a pagar: GRATIS " << endl;
		}
		if (pizza == 1) {
			grande++;
			if (!isGratis) {
				cout << "Importe a pagar: 50" << endl;
				total += 50;
			}
		}
		if (pizza == 2) {
			familiar++;
			if (!isGratis) {
				cout << "Importe a pagar: 60" << endl;
				total += 60;
			}
		}
		if (pizza == 3) {
			superfamiliar++;
			if (!isGratis) {
				cout << "Importe a pagar: 68" << endl;
				total += 68;
			}
		}
	}

	
if (e_delivery > 0) {
	e_p_d = t_e_d / e_delivery;
}
if (e_mostrador > 0) {
	e_p_m = t_e_m / e_mostrador;
}

	cout << "Importe total el último mes: " << total << endl;
	cout << "Cantidad de pedidos entregados gratis: " << gratis << endl;
	if (grande > familiar && grande > superfamiliar) {
		t_pizza = "Grande.";
	}
	if (familiar > grande && familiar > superfamiliar) {
		t_pizza = "familiar.";
	}
	if (grande > familiar && grande < superfamiliar) {
		t_pizza = "Superfamiliar.";
	}
	cout << "La pizza con mayor demanda es: " << t_pizza << endl;
	cout << "Tiempo de entrega promedio por cada tipo:" << endl;
	cout << "Mostrador: " << e_p_m << endl;
	cout << "Delivery: " << e_p_d << endl;
}
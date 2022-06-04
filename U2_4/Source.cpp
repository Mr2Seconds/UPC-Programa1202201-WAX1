#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void main() {
	/*cout << "Ingrese el tipo de producto que quiere (Papa, Cebolla, Limón, Ají, Maíz): " << endl;
	string tipo1;
	cin >> tipo1;
	cout << "Ingrese la cantidad de sacos a comprar:" << endl;
	int sacos;
	cin >> sacos;
	char tipo2;
	if (tipo1 == "Papa") {
		tipo2 = 'P';
	}
	else if (tipo1 == "Cebolla") {
		tipo2 = 'C';
	}
	else if (tipo1 == "Limón") {
		tipo2 = 'L';
	}
	else if (tipo1 == "Ají") {
		tipo2 = 'A';
	}
	else if (tipo1 == "Maíz") {
		tipo2 = 'M';
	}
	else {
		cout << "Error. Tipo de producto incorrecto." << endl;
	}
	float total;
	switch (tipo2) {
	case 'P': total = sacos * 20.5;
		break;
	case 'C': total = sacos * 19.4;
		break;
	case 'L': total = sacos * 32.3;
		break;
	case 'A': total = sacos * 16.5;
		break;
	case 'M': total = sacos * 19.8;
		break;
	default: cout << "Error. Tipo de producto incorrecto." << endl;
		break;
	}
	cout << "El total a pagar es: " << total;*/

	/*cout << "Ingrese la zona en la que va a estar: VIP, Platea o Popular." << endl;
	string zona1;
	cin >> zona1;
	int p_z = 0;
	char error = 'N';
	if (zona1 == "VIP") {
		p_z = 1500;
	}
	else if (zona1 == "Platea") {
		p_z = 750;
	}
	else if (zona1 == "Popular") {
		p_z = 265;
	}
	else {
		cout << "Ingresó zona incorrecta." << endl;
		error = 'Y';
	}
	if (error == 'N') {
		cout << "Ingrese su tipo de pago: Contado o Tarjeta." << endl;
	}
	string pago1;
	cin >> pago1;
	int extra = 0;
	string pago2;
	char error2 = 'N';
	if (pago1 == "Contado") {
		extra = 0;
	}
	else if (pago1 == "Tarjeta") {
		cout << "Ingrese el tipo de banco: Crédito, Continental, Otros." << endl;
		cin >> pago2;
	}
	else {
		cout << "Ingresó tipo incorrecto." << endl;
		error2 = 'Y';
	}
	if (zona1 == "VIP" && pago2 == "Crédito") {
		extra = 500;
	}
	else if (zona1 == "VIP" && pago2 == "Continental") {
		extra = 400;
	}
	else if (zona1 == "VIP" && pago2 == "Otros") {
		extra = 600;
	}
	else if (zona1 == "Platea" && pago2 == "Crédito") {
		extra = 200;
	}
	else if (zona1 == "Platea" && pago2 == "Continental") {
		extra = 125;
	}
	else if (zona1 == "Platea" && pago2 == "Otros") {
		extra = 270;
	}
	else if (zona1 == "Popular" && pago2 == "Crédito") {
		extra = 55;
	}
	else if (zona1 == "Popular" && pago2 == "Continental") {
		extra = 35;
	}
	else if (zona1 == "Popular" && pago2 == "Otros") {
		extra = 70;
	}
	int total = p_z + extra;
	if (error == 'N' && error2 == 'N') {
		cout << "El total a pagar es: " << total << endl;
	}*/
}
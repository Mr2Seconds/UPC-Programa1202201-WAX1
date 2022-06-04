#include <iostream>
#include <math.h>
using namespace std;
void main() {
	/*cout << "Ingrese el fabricante que eligió (M,A,L):" << endl;
	char fab;
	cin >> fab;
	cout << "Ingrese el programa (S,L)" << endl;
	char pro;
	cin >> pro;
	char dis;
	if (pro == 'L') {
		cout << "Ingrese el dispositivo (C,T,O)" << endl;
		cin >> dis;
	}
	else {
		dis = 'N';
	}
	int ver = (fab == 'M' && pro == 'S') * 1  + (fab == 'M' && pro == 'L' && dis == 'C') * 2 + (fab == 'M' && pro == 'L' && dis == 'T') * 3 +
		(fab == 'M' && pro == 'L' && dis == 'O') * 4 + (fab == 'A' && pro == 'S') * 5 + (fab == 'A' && pro == 'L' && dis == 'C') * 6 +
		(fab == 'A' && pro == 'L' && dis == 'T') * 7 + (fab == 'A' && pro == 'L' && dis == 'O') * 8 + (fab == 'L' && pro == 'S') * 9 +
		(fab == 'L' && pro == 'L' && dis == 'C') * 10 + (fab == 'L' && pro == 'L' && dis == 'T') * 11 + (fab == 'L' && pro == 'L' && dis == 'O') * 12;
	switch (ver) {
	case 1: cout << "El precio es 1500";
		break;
	case 2: cout << "El precio es 1800";
		break;
	case 3: cout << "El precio es 1200";
		break;
	case 4: cout << "El precio es 900";
		break;
	case 5: cout << "El precio es 2500";
		break;
	case 6: cout << "El precio es 1900";
		break;
	case 7: cout << "El precio es 1800";
		break;
	case 8: cout << "El precio es 1600";
		break;
	case 9: cout << "El precio es 1000";
		break;
	case 10: cout << "El precio es 100";
		break;
	case 11: cout << "El precio es 150";
		break;
	case 12: cout << "El precio es 50";
		break;
	default: cout << "Hay un error.";
		break;
	}*/

	/*cout << "Ingrese su edad:" << endl;
	int edad;
	cin >> edad;
	cout << "Ingrese su nacionalidad (E, N):" << endl;
	char país;
	cin >> país;
	int fijo = 2500;
	int b_p;
	if (país == 'E') {
		b_p = 500;
	}
	else {
		b_p = 0;
	}
	int b_e;
	if (edad > 14 && edad < 21) {
		b_e = 1400;
	}
	else if (edad < 26 && edad > 20) {
		b_e = 1500;
	}
	else if (edad > 25 && edad < 31) {
		b_e = 1200;
	}
	else {
		b_e = 800;
	}
	int total = fijo + b_p + b_e;
	cout << "El sueldo del jugador es: " << total << endl;*/

	/*cout << "Ingrese el tipo de producto (O, J, U): " << endl;
	char pro;
	cin >> pro;
	cout << "Ingrese el tipo de celular (I, A): " << endl;
	char cel;
	cin >> cel;
	cout << "Ingrese la cantidad que va a comprar: " << endl;
	int uni;
	cin >> uni;
	float precio;

	if (pro == 'O' && cel == 'I') {
		precio = 50.60;
	}
	else if (pro = 'O' && cel == 'A') {
		precio = 20.30;
	}
	else if (pro = 'J' && cel == 'I') {
		precio = 90.80;
	}
	else if (pro = 'J' && cel == 'A') {
		precio = 40.50;
	}
	else if (pro = 'U' && cel == 'I') {
		precio = 60.50;
	}
	else if (pro = 'U' && cel == 'A') {
		precio = 30.60;
	}
	else {
		cout << "Error." << endl;
	}
	float total = precio * uni;
	cout << "El total a pagar es: " << total << endl;*/

/*cout << "Ingrese el código de empleado:";
int cod;
cin >> cod;
int c = cod / 100;
int d = (cod - (c * 100)) / 10;
int u = (cod - (c * 100) - (d * 10));
char ue, de, ce;
switch (u) {
case 1: ;
case 2: ;
case 3: ue = 'X';
	break;
case 4: ;
case 5:;
case 6: ue = 'Y';
	break;
case 7: ;
case 8:;
case 9: ue = 'Z';
	break;
default: ue = '#';
	break;
}
switch (d) {
case 1: ;
case 2:;
case 3: de = 'T';
	break;
case 4: ;
case 5:;
case 6: de = 'W';
	break;
case 7: ;
case 8:;
case 9: de = 'P';
	break;
default: de = '&';
	break;
}
switch (c) {
case 1: ;
case 2:;
case 3: ce = 'Q';
	break;
case 4: ;
case 5:;
case 6: ce = 'W';
	break;
case 7: ;
case 8:;
case 9: ce = 'M';
	break;
default: ce = '@';
	break;
}
cout << "El código encriptado es: " << ce << de << ue << endl;*/
}
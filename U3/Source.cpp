#include <iostream>
#include <math.h>
#include <Windows.h>
#include <string>
using namespace std;

//1
/*
void dSquare() {
	for (int i2 = 1; i2 <= 3; i2++) {
		for (int i4 = 1; i4 <= 3; i4++) {
			cout << "*";
		}
		cout << endl;
	}
}
void main() {
	system("Color 02");
	dSquare();
}*/

//2

/*
void dSquare(int l, char cosa) {
	for (int i2 = 1; i2 <= l; i2++) {
		for (int i4 = 1; i4 <= l; i4++) {
			cout << cosa;
		}
		cout << endl;
	}
}
void main() {
	system("Color 02");
	dSquare(3,'*');
}*/

//3

/*
void dSquare(int x, int y, int l, char cosa) {
	if (y >= 1) {
		for (int i1 = 1; i1 <= y; i1++) {
			cout << endl;
		}
	}
	for (int i2 = 1; i2 <= l; i2++) {
		for (int i3 = 0; i3 < x; i3++) {
			cout << " ";
		}
		for (int i4 = 1; i4 <= l; i4++) {
			cout << cosa;
		}
		cout << endl;
	}
}
void main() {
	system("Color 02");
	dSquare(1, 1, 3, '*');
}*/

//4
/*
void dSquare(int x, int y, int w, int h, char cosa) {
	if (y >= 1) {
		for (int i1 = 1; i1 <= y; i1++) {
			cout << endl;
		}
	}
	for (int i2 = 1; i2 <= h; i2++) {
		for (int i3 = 0; i3 < x; i3++) {
			cout << " ";
		}
		for (int i4 = 1; i4 <= w; i4++) {
			cout << cosa;
		}
		cout << endl;
	}
}
void main() {
	system("Color 02");
	dSquare(3, 1, 5, 8, '*');
}*/

//5
/*
float DolarASol(float dolares) {
	float cambio = 3.76;
	float total = dolares * cambio;
	return total;
}

float SolADolar(float soles) {
	float cambio = 3.76;
	float total = soles / cambio;
	return total;
}

void main() {
	cout << DolarASol(4.0f) << endl;
	cout << SolADolar(10.0f) << endl;
}*/

//6
/*
int Inverse(int num) {
	int nuevo = 0;
	int og = num;
	while (num >= 1) {
		int dig = num % 10;
		nuevo = dig + nuevo * 10;
		num /= 10;
	}
	return nuevo;
}

void main() {
	cout << Inverse(1234567890) << endl;
}*/

//7
/*
string EsBisiesto(int a�o) {
	return (a�o % 4 == 0 && a�o % 100 != 0 || a�o % 400 == 0? "Es bisiesto." : "No es bisiesto.");
}

void main() {
	cout << "Che, ingresa tu a�o, pe'." << endl;
	int a�o; cin >> a�o;
	cout << EsBisiesto(a�o);
}*/

//8
/*
string EsV�lida(int d�a, int mes, int a�o) {
	int error = (mes == 1 && d�a > 31) + (a�o % 4 == 0 && a�o % 100 != 0 && mes == 2 && d�a > 29 || a�o % 400 == 0 && mes == 2 && d�a > 29) + 
		(a�o % 4 != 0 && mes == 2 && d�a > 28) + (mes == 3 && d�a > 31) + (mes == 4 && d�a > 30) + (mes == 5 && d�a > 31)
		+ (mes == 6 && d�a > 30) + (mes == 7 && d�a > 31) + (mes == 8 && d�a > 31) + (mes == 9 && d�a > 30) + (mes == 10 && d�a > 31) +
		(mes == 11 && d�a > 30) + (mes == 12 && d�a > 31) + (d�a < 1 || mes < 1 || a�o < 0) + (mes > 12);
	return (error > 0 ? "La fecha no es v�lida." : "La fecha es v�lida.");
}

void main() {
	cout << "Introduzca d�a, mes, y a�o. Por separado." << endl;
	int d�a, mes, a�o;
	cin >> d�a; cin >> mes; cin >> a�o;
	cout << EsV�lida(d�a, mes, a�o);
}*/

//9
/*
void AC�rculo(float radio) {
	float pi = 3.141592;
	cout << (pow(radio, 2) * pi);
}

void main (){
	cout << "Ingrese el radio del c�rculo." << endl;
	float radio;
	cin >> radio;
	AC�rculo(radio);
}*/

//10
/*
float AC�rculo(float radio) {
	float pi = 3.141592;
	return (pow(radio, 2) * pi);
}

void main (){
	cout << "Ingrese el radio del c�rculo." << endl;
	float radio;
	cin >> radio;
	cout << AC�rculo(radio);
}*/

//11
/*
float AC�rculo(float radio) {
	float pi = 3.141592;
	return (pow(radio, 2) * pi);
}

float PC�rculo(float radio) {
	float pi = 3.141592;
	return (2 * radio * pi);
}

void main (){
	cout << "Ingrese el radio del c�rculo." << endl;
	float radio;
	cin >> radio;
	cout << AC�rculo(radio);
	cout << PC�rculo(radio);
}*/

//12
/*
float AoPC�rculo(float radio, char tipo) {
	float pi = 3.141592;
	if (tipo == 'A') {
	return (pow(radio, 2) * pi);
	}
	else if (tipo == 'P') {
	return (2 * radio * pi);
	}
	else {
		cout << "Tipo equivocado. >B:( ";
	}
}

void main (){
	cout << "Ingrese el radio del c�rculo." << endl;
	float radio;
	cin >> radio;
	cout << "Ingrese el tipo (A: �rea; P: Per�metro)." << endl;
	char tipo;
	cin >> tipo;
	cout << AoPC�rculo(radio, tipo);
}*/

//17
/*
bool EsCuadr�tica(int a, int b, int c, int x) {
	int resultado = (a * (x * x)) + (b * x) + c;
	return resultado == 0;
}

int EsCuadr�ticaValor(int a, int b, int c, int x) {
	int resultado = (a * (x * x)) + (b * x) + c;
	return resultado;
}

void main() {
	int a = 1, b = -1, c = -12;
	int x = 100;
	for (int i = 1; i <= x; i++) {
		cout << "Evaluando con x " << i << " " << EsCuadr�ticaValor(a, b, c, i) << endl;
	}
}*/

//18
/*
void Capic�a(int num) {
	int nuevo = 0;
	int og = num;
	while (num >= 1) {
		int dig = num % 10;
		nuevo = dig + nuevo * 10;
		num /= 10;
	}
	if (og == nuevo) {
		cout << "El n�mero es Capic�a." << endl;
	}
	else {
		cout << "El n�mero no es Capic�a." << endl;
	}
}

void main() {
	Capic�a(12321);
}*/

//19
/*
void EsDivisible(int x, int y) {
	cout << (x % y == 0 ? "Son divisibles" : "No son divisibles") << endl;
}

void ListaDivisores(int x) {
	cout << "Los divisores del n�mero son:";
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void main() {
	ListaDivisores(5);
}*/

//20
/*
bool esPrimo(int numero) {
	if (numero == 0 || numero == 1) {
		return false;
	}
	bool primo = true;
	//5
	for (int i = 2; i < numero; i++)
	{
		if (numero % i == 0) {
			primo = false;
		}
	}
	return primo;
}

void main() {

	cout << esPrimo(13) << endl;
}*/

//21
/*
bool EsPar(int num){
	if ((num % 2) == 0) {
		return true;
	}
	else { return false; }
}

void main() {
	cout << "Ingrese un n�mero entero." << endl;
	int a; cin >> a;
	cout << "Es par?";
	(EsPar(a)== 1)? cout << "S� que si." : cout << "No, claro que no.";
}*/

//22

int factorial(int valor) {
	int resultado = 1;
	for (int i = 1; i <= valor; i++) {
		resultado *= i;
	}
	return resultado;
}

void main() {
	cout << "Ingrese un n�mero entero" << endl;
	int whipit; cin >> whipit;
	cout << factorial(whipit) << endl;
}

//23
/*
int parteEntera(float num) {
	return int(num);
}

void main() {
	float num = 255987.95;
	cout << "La parte entera es " << parteEntera(num) << endl;
}*/

//24
/*
float parteFlotante(float num) {
	return num - int(num);
}

void main() {
	float num = 255987.95;
	cout << "La parte flotante es " << parteFlotante(num);
}*/

//25
/*
bool esPerfecto(int num) {
	int suma = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0) {
			suma += i;
		}
	}
	
	return suma == num;
}

void main() {
	cout << esPerfecto(6);
}*/

//26
/*
bool esPerfecto(int num) {
	int suma = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0) {
			suma += i;
		}
	}
	return suma == num;
}

void main() {
	int cantidadNumeros = 4;
	int numero = 1;
	while (true) {
		if (esPerfecto(numero)) {
			cantidadNumeros--;
			cout << numero << " , ";
		}
		if (cantidadNumeros == 0) {
			break;
		}
		numero++;
	}
}*/

//27
/*
bool esPrimo(int& numero) {
	if (numero == 0 || numero == 1) {
		return false;
	}
	bool primo = true;
	
	for (int i = 2; i < numero; i++)
	{
		if (numero % i == 0) {
			primo = false;
		}
	}
	return primo;
}

void main() {
	int cantidadNumeros = 20;
	int numero = 0;
	while (cantidadNumeros > 0) {
		if (esPrimo(numero)) {
			cantidadNumeros--;
			cout << numero << " , ";
		}
		numero++;
	}
}*/

//28
/*
int obtenerDigito(int numero, int P) {
	int digito = -1;
	int temporal = numero;
	int divisor = 1;
	while (temporal / 10 > 0) {
		temporal = temporal / 10;
		divisor = divisor * 10;
	}
	int i = 0;
	while (divisor > 0){
		i++;
		if (i == P) {
			digito = numero / divisor;
		}
		numero = numero % divisor;
		divisor = divisor / 10;
	}
	return digito;
}

void main() {
	int numero = 3501;
	cout << obtenerDigito(numero,15);
}*/

//29
/*
void Intermedios(int x, int y) {
	if (x > y) {
		for (y; y <= x; y++) {
			cout << y << " ";
		}
	}
	if (x < y) {
		for (x; x <= y; x++) {
			cout << x << " ";
		}
	}
	else {
		cout << "No hay intermedios." << endl;;
	}
}

void main() {
	cout << "Ingrese el primer n�mero." << endl;
	int x;
	cin >> x;
	int y;
	cin >> y;
	Intermedios(x, y);
}*/

//36
/*
void Incrementar(float &a, float b) {
	a += b;
}

void main() {
	cout << "Ingrese el valor a modificar." << endl;
	float sonic; cin >> sonic;
	cout << "Ingrese el valor para sumar." << endl;
	float tails; cin >> tails;
	Incrementar(sonic, tails);
	cout << sonic;
}*/
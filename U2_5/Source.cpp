#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void main() {
	/*//1
	int suma = 0;
	for (int i = 1; i <= 10; i++) {
		suma = suma + i;
	}
	cout << "La suma de los primeros 10 números es: " << suma << endl;*/

	//2

	/*cout << "Ingrese el número límite: " << endl;
	int num;
	cin >> num;
	int suma = 0;
	int i = 0;
	cout << "La suma es: " ;
	for (i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			continue;
		}
		if (i < num - 1) {
			cout << i << " + ";
		}
		if (i >= num - 1) {
			cout << i;
		}
		suma = i + suma;
	}
	cout << " = " << suma;*/

	//3

	/*cout << "Ingrese el número límite: " << endl;
	int num;
	cin >> num;
	cout << "Los múltiplos son: ";
	int i = 1;
	for (i; i <= num; i++) {
		if (i % 3 == 0) {
			cout << i << " ";
		}
	}*/

	// 4

	/*cout << "Ingrese su número, entre el 1 y el 9: " << endl;
	int num;
	cin >> num;
	int i = 1;
	for (i; i <= 10; i++) {
		cout << num << " x " << i << " = " << num * i << endl;
	}*/

	// 5

	/*cout << "Ingrese la cantidad de números pares a sumar: " << endl;
	int par;
	cin >> par;
	cout << "Ingrese la cantidad de números impares a sumar: " << endl;
	int imp;
	cin >> imp;
	int i = 1;
	int suma1 = 0;
	int suma2 = 0;
	cout << "La suma de pares es: ";
	for (i = 1; i <= par; i++) {
		if (i < par) {
			cout << i*2 << " + ";
		}
		if (i == par) {
			cout << i*2;
		}
		suma1 = i*2 + suma1;
	}
	cout << " = " << suma1 << endl;
	cout << "La suma de impares es: ";
	for (i = 1; i <= imp; i++) {
		if (i < imp) {
			cout << i*2 - 1 << " + ";
		}
		if (i == imp) {
			cout << i*2 - 1;
		}
		suma2 = i*2 - 1 + suma2;
	}
	cout << " = " << suma2 << endl;*/

	//6

	/*cout << "Ingrese el número a sacar cuadrado: " << endl;
	int num;
	cin >> num;
	int cua = num*num;
	int i = 1;
	cout << num << "^2 = ";
	for (i; i <= num; i++) {
		if (i < num) {
			cout << i * 2 - 1 << " + ";
		}
		if (i == num) {
			cout << i * 2 - 1;
		}
	}
	cout << " = " << cua << endl;*/

	//7
/*cout << "Ingrese el número de alumnos." << endl;
int num;
cin >> num;
float ef;
float ep;
float tf;
float total;
for (int i = 1; i <= num; i++) {
	cout << "Ingrese la nota del EF del alumno: " << endl;
	cin >> ef;
	cout << "Ingrese la nota del EP del alumno: " << endl;
	cin >> ep;
	cout << "Ingrese la nota del TF del alumno: " << endl;
	cin >> tf;
	total = ((55.0f / 100.0f)*ef) + ((30.0f / 100.0f)*ep) + ((15.0f / 100.0f)*tf);
	cout << "El promedio del alumno es: " << total << endl;
}*/

//8
/*cout << "Ingrese el número de alumnos." << endl;
int num;
int peso;
cin >> num;
int m40 = 0;
int e40y50 = 0;
int e50y60 = 0;
int m60 = 0;
if (num > 0 && num <= 50) {
	for (int i = 1; i <= num; i++) {
		cout << "Ingrese el peso " << i << ":" << endl;
		cin >> peso;

		if (peso < 40) {
			m40 += 1;
		}
		else if (peso >= 40 && peso <= 50) {
			e40y50 += 1;
		}
		else if (peso > 50 && peso < 60) {
			e50y60 += 1;
		}
		else if (peso >= 60) {
			m60 += 1;
		}
	}
	cout << "Alumnos de menos de 40kg: " << m40 << endl;
	cout << "Alumnos entre 40 y 50 kg: " << e40y50 << endl;
	cout << "Alumnos de más de 50 y menos de 60kg: " << e50y60 << endl;
	cout << "Alumnos de más de 60kg: " << m60 << endl;
}
else {
	cout << "Número incorrecto." << endl;
}*/

//9
/*int num;
int leídos = 0;
int mayor = -INFINITY;
int menor = INFINITY;
int positivos = 0;
int negativos = 0;
float promedio = 0;
for (int i = 1; i++;) {
	cout << "Ingrese número: " << endl;
	cin >> num;
	if (num == 0) {
		break;
	}
	leídos += 1;
	if (mayor < num) {
		mayor = num;
	}
	if (menor > num) {
		menor = num;
	}
	if (num > 0) {
		positivos += 1;
	}
	if (num < 0) {
		negativos += 1;
	}
	promedio += num;
}
cout << "Números leídos: " << leídos << endl;
cout << "Número mayor: " << mayor << endl;
cout << "Número menor: " << menor << endl;
cout << "Números positivos: " << positivos << endl;
cout << "Números negativos: " << negativos << endl;
cout << "Promedio: " << promedio / leídos << endl;*/

//10

/*srand((unsigned)time(NULL));
int a = (rand()%100);
int intentos = 12;
int i_u = 0;
int n_u = 0;
for (int i = 1; i++;) {
	cout << "Intento " << i-1 << " - Ingrese N:" << endl;
	cin >> n_u;
	i_u++;
	if (n_u < a) {
		cout << "El número es mayor." << endl;
	}
	else if (n_u > a) {
		cout << "El número es menor." << endl;
	}
	else {
		if (i_u >= 1 && i_u <= 3) {
			cout << "Fue pura suerte !1!1!1" << endl;
		}
		else if (i_u >= 4 && i_u <= 6) {
			cout << "Eres bueno 1!1" << endl;
		}
		else if (i_u == 7) {
			cout << "No está mal." << endl;
		}
		else if (i_u == 8) {
			cout << "Se puede mejorar !1!" << endl;
		}
		else if (i_u >= 9 && i_u <= 12) {
			cout << "Qué mal estás 1!1!1!" << endl;
		}
	}
	intentos--;
	if (intentos == 0) {
		break;
	}
}*/

//11

/*cout << "Ingrese la cantidad de términos: " << endl;
int num;
cin >> num;
int valor = 1;
float fracción = 0;
float suma = 0;
int i = 1;
for (i; i++;) {
	valor *= 2;
	fracción = (float(1) / valor);
	suma = suma + fracción;
	if (i == num) {
		cout << "La suma es: " << 1 + suma << endl;
		break;
	}
	if (num == 1) {
		break;
	}

}*/

//12

/*cout << "Ingrese la cantidad de términos: " << endl;
int num;
cin >> num;
int valor = 1;
float fracción = 0;
float suma = 0;
for (int i = 1; i < num; i++) {
	valor *= 2;
	fracción = (float(1) / valor);
	if (i % 2 == 0) {
		suma = suma + fracción;
	}
	else if (i % 2 != 0) {
		suma = suma - fracción;
	}
	if (i == num - 1) {
		cout << "La suma es: " << 1 + suma << endl;
	}
}*/

//13
/*cout << "Ingrese la cantidad de términos: " << endl;
int num;
cin >> num;
int valor = 1;
float fracción = 0;
float suma = 0;
int i = 1;
for (i; i <= num; i++) {
	valor *= 2;
	fracción = (float(1) / valor);
	suma = suma + fracción;
	if (i == num) {
		cout << "La suma es: " << suma << endl;
		break;
	}
	if (num == 1) {
		break;
	}

}*/

//14
/*cout << "Ingrese un número entero positivo: " << endl;
int num;
cin >> num;
while (num >= 1) {
	cout << num % 10;
	num /= 10;
}*/

//15
/*cout << "Ingrese un número entero positivo: " << endl;
int num;
cin >> num;
int suma = 0;
for (int i = 1; i < num; i++) {
	if (num % i == 0) {
		suma += i;
	}
}
if (suma == num) {
	cout << "El número es perfecto." << endl;
}
else {
	cout << "El número no es perfecto." << endl;
}*/

//16
/*cout << "Ingrese el número de términos: " << endl;
int num;
cin >> num;
int ant = 0;
int val = 1;
int temp;
for (int i = 1; i <= num; i++) {
	temp = val;
	val += ant;
	ant = temp;
	cout << ant << " ";
}*/

//17
	cout << "Ingrese el número de términos: " << endl;
	int num;
	cin >> num;
	int ant = 0;
	int val = 1;
	int temp;
	int suma = 0;
	for (int i = 1; i <= num; i++) {
		temp = val;
		val += ant;
		ant = temp;
		suma += ant;
	}
	cout << "La suma es: " << suma << endl;
}
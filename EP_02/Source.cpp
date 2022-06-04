#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void main() {
	char e_c, sex, tvp;
	int t_p = 0, c_psm = 0, c_mnv = 0, soltero = 0, casado = 0, viudo = 0, divorciado = 0;
	float sueldo = 0.0f, s_mnv = 0.0f;
	float a = INFINITY;
	for (int i = 1; i++;) {
		cout << "Ingrese su estado civil (S: Soltero, C: Casado, V: Viudo, D: Divorciado): " << endl;
		cin >> e_c;
		if (e_c == 'X') {
			break;
		}
		else if (e_c == 'S') {
			soltero += 1;
		}
		else if (e_c == 'C') {
			casado += 1;
		}
		else if (e_c == 'V') {
			viudo += 1;
		}
		else if (e_c == 'D') {
			divorciado += 1;
		}
		else {
			cout << "Estado Civil incorrecto." << endl;
			break;
		}
		t_p += 1;
		cout << "Ingrese su sexo (M: Masculino; F: Femenino): " << endl;
		cin >> sex;
		if (sex != 'M' && sex != 'F') {
			cout << "Sexo incorrecto." << endl;
			break;
		}
		cout << "Ingrese su sueldo (Número decimal mayor a 0): " << endl;
		cin >> sueldo;
		if (sueldo <= 0) {
			cout << "Sueldo incorrecto." << endl;
			break;
		}
		cout << "Tiene vivienda propia? (S: Sí, N: No): " << endl;
		cin >> tvp;
		if (tvp != 'S' && tvp != 'N') {
			cout << "Respuesta incorrecta." << endl;
			break;
		}
		if (sueldo > 1500) {
			c_psm += 1;
		}
		if (sex == 'F' && tvp == 'N') {
			s_mnv += sueldo;
			c_mnv += 1;
		}
		if (sex == 'M' && tvp == 'S' && e_c != 'C') {
			if (a > sueldo) {
				a = sueldo;
			}
			else { 
				a = a; 
			}
		}
	}
	cout << "Porcentaje de personas que tienen sueldo mayor a 1500: " << (c_psm *100)/t_p << "%" << endl;
	cout << "Promedio de sueldo de las mujeres que no tienen una vivienda propia: " << s_mnv / c_mnv << endl;
	cout << "Estados civiles con mayor frecuencia: " << endl;
	if (soltero >= casado && soltero >= viudo && soltero >= divorciado) {
		cout << "Soltero" << endl;
	}
	if (casado >= soltero && casado >= viudo && casado >= divorciado) {
		cout << "Casado" << endl;
	}
	if (viudo >= casado && viudo >= soltero && viudo >= divorciado) {
		cout << "Viudo" << endl;
	}
	if (divorciado >= casado && divorciado >= viudo && soltero <= divorciado) {
		cout << "Divorciado" << endl;
	}
	if (a < INFINITY) {
		cout << "Menor sueldo del varón que tiene casa propia y no es casado: " << a << endl;
	}
	else {
		cout << "Menor sueldo del varón que tiene casa propia y no es casado: No hubo tal persona." << endl;
	}
}
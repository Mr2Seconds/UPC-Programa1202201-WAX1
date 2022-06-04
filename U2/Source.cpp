#include <iostream>
#include <math.h>
using namespace std;

void main() {
	/*cout << "Ingrese un número entero:" << endl;
	int num;
	cin >> num;
	int rest = num % 2;
	if (rest == 0 && num != 0) {
		cout << "El número ingresado es par." << endl;
	}
	else if (rest != 0) {
		cout << "El número ingresado es impar." << endl;
	}
	else if (num == 0) {
		cout << "El número ingresado es cero." << endl;
	}*/
	
	/*cout << "Ingrese el peso del elefante:" << endl;
	float ele;
	cin >> ele;
	cout << "Ingrese el peso del dinosaurio:" << endl;
	float din;
	cin >> din;
	if (ele < din) {
		cout << "El dinosaurio pesa más que el elefante." << endl;
	}
	else if (din < ele) {
		cout << "El elefante pesa más que el dinosaurio." << endl;
	}
	else {
		cout << "El dinosaurio y el elefante pesan igual." << endl;
	}*/
	//18
	cout << "Ingrese su posición en el mundial:" << endl;
	int pos;
	cin >> pos;
	switch (pos) {
	case 0: cout << "Ajá, te crees muy gracioso. De seguro te dicen El Bromas allá por tu casa. " << endl <<
		"No por tus chistes, sino porque tú eres la broma." << endl;
		break;
	case 1:
	case 2:
	case 3:
	case 4: cout << "El equipo seleccionado entró al mundial de forma directa. Felicidades!" << endl;
		break;
	case 5: cout << "Vas al repechaje. Ojalá te vaya bien esta vez, ya que parece que te fue más o menos. " << endl <<
		"Osea, no te lo tomes a mal, es solo un consejo. Bueno, suerte." 
		<< endl;
		break;
	case 6:
	default: cout << "Oooooooof. Lo lamento amigo...  no sé cómo decirte esto, pero..." << endl <<
		"Hey, no es para tanto, vamos, es solo un torneíto para locos, igual estás mejor así. " << endl <<
		"Nonono, espera, no llores, porfa. Venga, anímate, podemos ver los juegos en TV... amigo, amigo! AMIGOOOOOOOO!" << endl;
		break;
	}
}

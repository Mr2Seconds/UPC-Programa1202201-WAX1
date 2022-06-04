#include <iostream>
#include <math.h>
using namespace std;
void main() {
	//UUUFPPPPDDMMAAAA
	//1234567890123456
	//4567890123456
	//567890123456
	//7890123456
	//90123456
	//123456
	//3456
	cout << "Ingrese el código de barras de 16 dígitos." << endl;
	long long tails;
	cin >> tails;            
	long long UUU = tails / (10000000000000);       
	long long F = (tails - (UUU * 10000000000000))/1000000000000;             
	long long PP1 = (tails - (UUU * 10000000000000) - (F * 1000000000000)) / 10000000000;           
	long long PP2 = (tails - (UUU * 10000000000000) - (F * 1000000000000) - (PP1 * 10000000000)) / 100000000;
	long long DD =(tails - (UUU * 10000000000000) - (F * 1000000000000) - (PP1 * 10000000000) - (PP2 * 100000000)) / 1000000;
	long long MM = (tails - (UUU * 10000000000000) - (F * (1000000000000)) - (PP1 * 10000000000) - (PP2 * 100000000) - (DD * 1000000)) / 10000;
	long long AAAA = (tails - (UUU * 10000000000000) - (F * (1000000000000)) - (PP1 * 10000000000) - (PP2 * 100000000) - (DD * 1000000) - (MM * 10000));
	cout << UUU << " " << bool(F) << " " << char(PP1) << " " << char(PP2) << " " << DD << " " << MM << " " << AAAA;

	/*cout << "Ingrese su raza (S, N, H):" << endl;
	char raza;
	cin >> raza;
	cout << "Ingrese Transformación (1,2,3):" << endl;
	int trans;
	cin >> trans;
	cout << "Ingrese dígito verificador:" << endl;
	int dni;
	cin >> dni;

	int bono = (raza == 'S' && trans == 1) * 5000 + (raza == 'S' && trans == 2) * 13000 + (raza == 'S' && trans == 3) * 28000 + (raza == 'H' && trans == 1) * 250 +
		(raza == 'H' && trans == 2) * 2000 + (raza == 'H' && trans == 3) * 10000 + (raza == 'N' && trans == 1) * 450 + (raza == 'N' && trans == 2) * 10000 +
		(raza == 'N' && trans == 3) * 20000;
	int resto = dni % 2;
	int bono2 = (dni == 0)*5 + (resto == 0 && dni != 0)*20 + (resto > 0)*40;
	float masdenuevemil = bono * ((100 +bono2) / 100.0f);
	cout << "Su total de poder es: " << masdenuevemil;*/
}
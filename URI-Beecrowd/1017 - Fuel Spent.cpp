#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main() {

    int tempo, vMedia, distancia;
	double qtdGasolina;
	cout << fixed << setprecision(3);

	cin >> tempo >> vMedia;

	distancia = tempo * vMedia;
	qtdGasolina = distancia / 12.0;

	cout << qtdGasolina << endl;
   
	system("PAUSE");
    return 0;
}

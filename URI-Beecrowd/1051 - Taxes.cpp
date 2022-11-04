#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    double salario, imposto,aux,aux2,aux3;
	cout << fixed << setprecision(2);

	cin >> salario;

	if (salario <= 2000)
    		cout << "Isento" << endl;


	if(salario > 2000 && salario <= 3000)
	{
		aux = salario - 2000;
		imposto = aux * 0.08;
		cout << "R$ " << imposto << endl;
	}

	if(salario > 3000 && salario <= 4500)
	{
		aux = salario - 3000;
		aux2 = 1000 * 0.08;
		imposto = aux * 0.18 + aux2;
		cout << "R$ " << imposto << endl;
	}

	if(salario > 4500)
	{
		aux = salario - 4500;
		aux2 = 1000 * 0.08;
		aux3 = 1500 * 0.18;
		imposto = aux * 0.28 + aux2 + aux3;
		cout << "R$ " << imposto << endl;
	}
	system("pause");
    return 0;
}

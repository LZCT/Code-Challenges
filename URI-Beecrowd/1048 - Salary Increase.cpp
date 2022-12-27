#include <iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main() {

	int percent;
	double salario, novosalario, reajuste;
	cout << fixed << setprecision(2);

	cin >> salario;

	if(salario <= 400){
		novosalario = salario * 1.15;
		reajuste = salario * 0.15;
		percent = 15;
	}
	if(salario > 400 && salario <= 800){
		novosalario = salario * 1.12;
		reajuste = salario * 0.12;
		percent = 12;
	}

	if(salario > 800 && salario <= 1200){
		novosalario = salario * 1.10;
		reajuste = salario * 0.10;
		percent = 10;
	}

	if(salario > 1200 && salario <= 2000){
		novosalario = salario * 1.07;
		reajuste = salario * 0.07;
		percent = 7;
	}

	if(salario > 2000){
		novosalario = salario * 1.04;
		reajuste = salario * 0.04;
		percent = 4;
	}
	
    cout << "Novo salario: " << novosalario << endl;
	cout << "Reajuste ganho: " << reajuste << endl;
	cout << "Em percentual: " << percent << " %" << endl;
	system("pause");
	return 0;
}

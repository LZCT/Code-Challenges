#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int valor, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, aux = 0;
	
	cin >> valor;
	
	n100 = valor / 100;
	aux = valor % 100;
	n50 = aux / 50;
	aux = aux % 50;
	n20 = aux / 20;
	aux = aux % 20;
	n10 = aux / 10;
	aux = aux % 10;
	n5 = aux / 5;
	aux = aux % 5;
	n2 = aux / 2;
	aux = aux % 2;
	n1 = aux / 1;
	
	cout << valor << endl;
	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n1 << " nota(s) de R$ 1,00" << endl;
	
	system("pause");
    return 0;
}

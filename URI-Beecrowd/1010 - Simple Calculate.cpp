#include <iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main() {

    int cod1,cod2,n1,n2;
	double valor1,valor2,valortotal;
	cout << fixed << setprecision(2);

	cin >> cod1 >> n1 >> valor1;
	cin >> cod2 >> n2 >> valor2;

	valortotal = n1 * valor1 + n2 * valor2;

	cout << "VALOR A PAGAR: R$ " << valortotal << endl;

	system("pause");
    return 0;
}

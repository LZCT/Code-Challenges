#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int N,aux1 = 1,aux2 = 1,aux3;

	cin >> N;

	cout << "0";
	for(int cont = 1; cont < N; cont++){
		cout << " " << aux1;
		aux3 = aux1;
		aux1 = aux2;
		aux2 += aux3;
	}

	cout << endl;
	system("pause");
    return 0;
}

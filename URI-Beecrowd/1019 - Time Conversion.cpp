#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

   	int horas, minutos, N;

	cin >> N;

	minutos = N / 60;
	N = N - minutos * 60;
	horas = N / 3600 ;
	N = N - horas * 3600;
	horas = horas + minutos / 60;
	minutos = minutos - horas  * 60;

	cout << horas << ":" << minutos << ":" << N << endl;
	system("pause");
    return 0;
}

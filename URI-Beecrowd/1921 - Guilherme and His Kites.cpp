#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	long long int lados, D;
	
	cin >> lados;
	
	D = (lados * (lados - 3)) / 2;
	
	cout << D << endl;

	system("pause");
    return 0;
}

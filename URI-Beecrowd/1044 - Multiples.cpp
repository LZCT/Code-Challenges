#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int A,B;
	cin >> A >> B;

	if(A % B == 0 || B % A == 0)
		cout << "Sao Multiplos" << endl;
	else
		cout << "Nao sao Multiplos" << endl;

system("pause");
    return 0;
}

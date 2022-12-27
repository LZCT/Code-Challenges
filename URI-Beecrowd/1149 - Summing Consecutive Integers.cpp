#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int A,N,soma;

	cin >> A >> N;

	while(N <= 0)
		cin >> N;

	soma = A;

	for(int i=1; i < N; i++){
		A++;
		soma += A;
	}

	cout << soma << endl;
	system("pause");
    return 0;
}

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int N;

	cin >> N;
	
	for(int i = 1; i < 11; i++){
        cout << i << " x " << N << " = " << N * i << endl;
	}
	
	system("pause");
    return 0;
}

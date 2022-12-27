#include <iostream>
#include <cstdlib>

using namespace std;
int fatorial(int x);
int main() {

    int N;

	cin >> N;

	cout << fatorial(N) << endl;
	
	system("pause");
    return 0;
}

int fatorial(int x){
	int fat = 0,num = x;
	for(int i = 1; i < num; i++){
		fat = x * (num - i);
		x = fat;
	}
	return x;
}
		
	

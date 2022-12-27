#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int a,b,c,aux,a1,b1,c1;

	cin >> a >> b >> c;

	a1 = a;
	b1 = b;
	c1 = c;
	
	if(a1 > b1){
		aux = b1;
		b1 = a1;
		a1 = aux;
	}
	if(a1 > c1){
		aux = c1;
		c1 = a1;
		a1 = aux;
	}
	if(b1 > c1){
		aux = c1;
		c1 = b1;
		b1 = aux;
	}
   
	cout << a1 << endl;
	cout << b1 << endl;
	cout << c1 << endl;
	cout << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	system("pause");
    return 0;
}

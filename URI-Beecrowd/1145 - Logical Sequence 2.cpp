#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int X, Y;

	cin >> X >> Y;
	
    for(int cont=1; cont <= Y; cont++)
	{
  	cout << cont;
  	if(cont % X != 0)
  	    cout << " ";
    else
        cout << endl;
	
	}
	system("pause");
    return 0;
}

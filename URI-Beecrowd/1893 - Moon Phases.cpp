#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int x, y;
	
	cin >> x >> y;
	
	if(y >= 0 && y <= 2)
	    cout << "nova" << endl;
	else
		if(y >= 3 && y <= 96 && x < y)
	    	cout << "crescente" << endl;
	else
    	if(y >= 97 && y <= 100)
	    	cout << "cheia" << endl;
    else
		if(y >= 3 && y <= 96 && x > y)
	    	cout << "minguante" << endl;

	system("pause");
    return 0;
}

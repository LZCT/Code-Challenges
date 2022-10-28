#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main() {

   double A, B, C, MEDIA;

	cout << fixed << setprecision(1);
	cin >> A >> B >> C;

	MEDIA = (A * 2 + B * 3 + C * 5) / 10;

	cout << "MEDIA = " << MEDIA << endl;
   
	system("PAUSE");
    return 0;
}

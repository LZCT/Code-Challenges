#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main() {

   double Raio, Area;
     cout << fixed << setprecision(4);
     cin >> Raio;

     Area = 3.14159 * Raio * Raio;

     cout << "A=" << Area << endl;
	system("PAUSE");
    return 0;
}

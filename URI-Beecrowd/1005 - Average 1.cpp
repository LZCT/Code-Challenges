#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main() {

   double A,B,MEDIA;
   cout << fixed << setprecision(5);
   cin >> A >> B;
   MEDIA = (A * 3.5 + B * 7.5) / 11;
   
   cout << "MEDIA = " << MEDIA << endl;
   
	system("PAUSE");
    return 0;
}

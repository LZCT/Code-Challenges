#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

   double x1,x2,y1,y2,d;
   cout << fixed << setprecision(4);
   
   cin >> x1 >> y1 >> x2 >> y2;
   
   d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
   cout << d << endl;
   
	system("PAUSE");
    return 0;
}

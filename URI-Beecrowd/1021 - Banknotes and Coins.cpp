#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main() {

    float n1;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, m1=0, m50=0, m25=0, m10=0, m5=0, m01=0, n;

    cin >> n1;
    n = round(n1 * 100);
    
   	n100 = (int)n / 10000;
	
	n50 = (int)n % 10000 / 5000;

	n20 = (int)n % 10000 % 5000 / 2000;
	
	n10 = (int)n % 10000 % 5000 % 2000 / 1000;
	
	n5 = (int)n % 10000 % 5000 % 2000 % 1000 / 500;
	
	n2 = (int)n % 10000 % 5000 % 2000 % 1000 % 500 / 200;
	
	m1 = (int)n % 10000 % 5000 % 2000 % 1000 % 500 % 200 / 100;
	
	m50 = (int)n % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 / 50;
	
	m25 = (int)n % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 50 / 25;

	m10 = (int)n % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 50 % 25 / 10;
	
	m5 = (int)n % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 50 % 25 % 10 / 5;

	m01 = (int)n % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 50 % 25 % 10 % 5;
	

   
    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m1 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;
    

	system("pause");
    return 0;
}

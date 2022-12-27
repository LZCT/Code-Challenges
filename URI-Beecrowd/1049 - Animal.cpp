#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    string tipo1, tipo2, tipo3;
	cin >> tipo1 >> tipo2 >> tipo3;

	if (tipo1 == "vertebrado")
	{
            if (tipo2 == "mamifero"){
                if (tipo3 == "onivoro")
				    cout << "homem" << endl;
                else
				    cout << "vaca" << endl;
            }
			else{
                 if (tipo3 == "carnivoro")
				    cout << "aguia" << endl;
                else
					cout << "pomba" << endl;
            }
    }
		else{
            if (tipo2 == "anelideo"){
               if (tipo3 == "hematofago")
			        cout << "sanguessuga" << endl;
        	   else
				    cout << "minhoca" << endl;
            }
			else{
               if (tipo3 == "hematofago")
			        cout << "pulga" << endl;
               else
				    cout << "lagarta" << endl;
            }
        }
	system("pause");
    return 0;
}

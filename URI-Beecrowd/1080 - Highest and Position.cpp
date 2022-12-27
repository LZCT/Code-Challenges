#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int num, posicao = 1, posicaomaior = 0, maiornum = 0;
	while(posicao <= 100)
	{
		cin >> num;
		if(num > maiornum)
		{
			maiornum = num;
			posicaomaior = posicao;
		}
		posicao++;
	}

	cout << maiornum << endl;
	cout << posicaomaior << endl;
	system("pause");
    return 0;
}

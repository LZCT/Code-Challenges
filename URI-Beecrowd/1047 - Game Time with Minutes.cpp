#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int hInicial, hFinal, mInicial, mFinal,hDuracao,mDuracao;

    cin >> hInicial >> mInicial >> hFinal >> mFinal;

    if(hFinal < hInicial)
    hFinal = hFinal + 24;

	mInicial = mInicial + (hInicial * 60);
    mFinal = mFinal + (hFinal * 60);

    if(mFinal == mInicial)
    {
        hDuracao = 24;
        mDuracao = 0;
    }
    else
    {
        mDuracao = mFinal - mInicial;
        hDuracao = mDuracao / 60;
        mDuracao = mDuracao % 60;

    }
    cout << "O JOGO DUROU " << hDuracao << " HORA(S) E " << mDuracao << " MINUTO(S)" << endl;
    system("1047");
    return 0;
}

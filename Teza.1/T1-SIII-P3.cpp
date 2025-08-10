///eficient din punct de vedere al memoriei deoarece nu memorez sirul intr-un vector
///eficient din punct de vedere al timpului deoarece parcurg sirul o singura data

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac.txt");

int prima_cifra(int n)
{
    while(n > 9)
        n /= 10;
    return n;
}

int ultima_cifra(int n)
{
    return n % 10;
}

int main()
{
    int cnt = 0;
    int nrmax = -1;
    int a, b, prim_cif, ultim_cif;
    int n;
    fin >> n;
    ultim_cif = ultima_cifra(n);
    while (fin >> n)
    {
        if(prima_cifra(n) == ultim_cif)
        {
            cnt++;
            ultim_cif = ultima_cifra(n);
        }
        else {
            if(cnt > nrmax)
            {
                nrmax = cnt;
            }
            ultim_cif = ultima_cifra(n);
            cnt = 0;
        }
    }
    ///adaug la rezultat un unu deoarece eu nu am numarat numerele din secventa fazana, ci legaturile dintre nr din secventa
    cout << nrmax + 1 << "\n";
    return 0;
}


///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu memorez sirul din fisier
///
///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg o singura data sirul din fisier

#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T14.txt");

int main()
{
    int n, m, v_fr[100] = {0}, cnt = 0;
    fin >> n;

      ///completez vectorul de frecventa cu elementele din fisier

    while(fin >> m)
        v_fr[m]++;

      ///verific daca vectorul de frecventa are o valoare diferita de zero pe pozitia i.
      ///daca are, adun acea valoare in cnt si verific daca dupa aceasta adunare valoarea
      ///este mai mare decat n. daca este, afisez i si opresc cautarea.

    for(int i = 99; i >= 0; i--)
        if(v_fr[i] != 0){
            cnt += v_fr[i];
            if(cnt >= n){
                cout << i << '\n';
                break;
            }
        }
    return 0;
}

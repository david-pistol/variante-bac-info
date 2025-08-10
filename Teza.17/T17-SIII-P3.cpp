
///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu retin sirul din fisier.
///
///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg sirul o singura data.

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T17.txt");

struct numere{
    int nr, ind;
};

int main()
{
    int n, ultim_cif, i = 1, lungime_sec, lungime_sec_max = -1, ultim_cif_sec_max;
    numere v[10] = {0};   ///vector care tine minte valoarea ultimei cifre a lui n si pozitia primei aparitii in sir
    while(fin >> n){
        ultim_cif = n % 10;
        if(v[ultim_cif].nr == 0){   ///daca ultima cirfa nu apare in vector, atunci o introduc si ii retin pozitia
            v[ultim_cif].nr++;
            v[ultim_cif].ind = i;
        }
        else if(v[ultim_cif].nr == 1){    ///daca ultima cifra apare, atunci calculez distanta de la prima aparitie la cea curenta
            lungime_sec = i - v[ultim_cif].ind + 1;
            if(lungime_sec >= lungime_sec_max){   ///daca aceasta lungime este mai mare sau egala decat cea maxima, atunci retin pozitia si lungimea
                lungime_sec_max = lungime_sec;
                ultim_cif_sec_max = ultim_cif;
            }
        }
        i++;
    }
    cout << lungime_sec_max << " " << ultim_cif_sec_max << '\n';
    return 0;
}

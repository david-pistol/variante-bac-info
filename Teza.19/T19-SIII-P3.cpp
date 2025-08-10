
///   Am creat 3 for-uri dace merg de la 1 pana la 9 din 2 in 2 pasi. Apoi, in variabila r, am creat prima jumatate a numarului
/// pe care trebuie sa-l afisez, iar in variabila r am memorat rasturnatul variabilei nr. La sfarsit am lipit cele doua jumatati 
/// in variabila nr.

///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg structurile repetitive din 2 in 2 pasi.
///
///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu folosesc tablouri unidimensionale sau bidimensionale
/// si folosesc doar 3 variabile de tip int.

#include <iostream>
#include <fstream>
using namespace std;

ofstream fout ("bac-T19.txt");

int main()
{
    for(int i = 1; i <= 9; i += 2)
        for(int j = 1; j <= 9; j += 2)
            for(int k = 1; k <= 9; k += 2){
                int nr = i * 100 + j * 10 + k;    ///creez prima jumatate
                int aux_nr = nr;
                int r = 0;
                while(aux_nr){    ///creez a doua jumatate(variabila nr rasturnata) 
                    r = r * 10 + (aux_nr % 10);
                    aux_nr /= 10;
                }
                nr = nr * 1000 + r;   ///lipesc cele doua rezultate 
                fout << nr << '\n';   ///afisez numarul final
            }
    return 0;
}

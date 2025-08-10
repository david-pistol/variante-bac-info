
///   Prin variabila nrcif_a am memorat numarul de cifre pe care il are a. Apoi am parcurs sirul de valori si am
///verificate daca partea din stanga de lungime nrcif_a este egala cu a. Daca este, atunci in variabila ultimul_nr
///am memorat valoarea numarului care respecta conditia. Daca sunt mai multe numere in sir care respecta conditia,
///variabila memoreaza ultimul numar pe care il gaseste.
///
///   Algoritmul este eficient din punct de vedere ap memoriei deoarece nu memorez sirul.
///
///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg sirul o singura data.

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin ("bac-T13.txt");

int main()
{
    int a, b, ultimul_nr;
    fin >> a;
    int aux_a = a, nrcif_a = 0;

      ///verific numarul de cifre

    while(aux_a){
        nrcif_a++;
        aux_a /= 10;
    }

    while(fin >> b)
        ///nu este nevoie sa fac conversia asta la int, deoarece stiu ca nrcif_a este maxim 4,
        ///ceea ce inseamna ca valoarea functiei pow(10, nrcif_a) este maxim 10.000 care incape 
        ///in int, dar editorul nu ma lasa sa compilez deoarece anticipeaza ca nrcif_a poate sa fie mai mare
        ///decat 4(variabila nrcif_a fiind declarata in int)
        if(b % (int)pow(10, nrcif_a) == a) 
            ultimul_nr = b;
    cout << ultimul_nr << '\n';
    return 0;
}

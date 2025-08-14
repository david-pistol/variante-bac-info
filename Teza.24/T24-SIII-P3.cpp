
///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg o singura data sirul.
///
///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu memorez sirul din fisier.

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T24.txt");

int main()
{
    int n, prima_cif, lungime_sec_curenta = 1, lungime_sec_max = -1, nr_sec_max = -1;
    fin >> n;   ///citesc primul numar
    prima_cif = n / 100;    ///aflu prima cifra a primului nr din sir ca sa am cu ce sa compar restul cifrelor
    while(fin >> n){
        if(n / 100 == prima_cif){   ///daca cifra curenta este egala cu prima cifra de la inceputul secventei adaug la lungime_sec_curenta un 1
            lungime_sec_curenta++;
        }
        else{   ///daca nu este egala avem doua cazuri
            if(lungime_sec_curenta > lungime_sec_max){    ///cand lungimea curenta este mai mare decat cea maxima atunci sec curenta
                lungime_sec_max = lungime_sec_curenta;    ///devine cea maxima, iar nr de aparitii devine 1
                nr_sec_max = 1;
            }
            else if(lungime_sec_curenta == lungime_sec_max)   ///cand lungimile sunt egale doar cresc nr de sec maxim 
                nr_sec_max++;

            prima_cif = n / 100;  ///deoarece urmeaza o sec noua, inlocuiesc prima cifra cu prima cifra a nr curent din sir
            lungime_sec_curenta = 1;  ///si lungimea curenta devine 1
        }
    }
    
        ///mai verific odata pentru ultima secventa care ar putea sa nu fie verificata in while(in cazul in care while-ul se termina
        ///cu primul if din acesta)

    if(lungime_sec_curenta > lungime_sec_max){
        lungime_sec_max = lungime_sec_curenta;
        nr_sec_max = 1;
    }
    else if(lungime_sec_curenta == lungime_sec_max)
        nr_sec_max++;

    cout << lungime_sec_max << " " << nr_sec_max;

    return 0;
}

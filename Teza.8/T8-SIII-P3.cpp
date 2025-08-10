
///   Pentru a afla cate zerouri are la final un n! mai intai trebuie sa aflam care numere din acel
///produs pot forma un 10. pentru aceasta am impartit numarul curent cu 5, 
///cu 5 * 5, cu 5 * 5 * 5 s.a.m.d pana cand catul impartirii a devenit 0.
///   Daca am gasit un 5 inseamna ca putem sa-i gasim un 2(deoarece 2 este mult mai frecvent decat 5) si astfel am
///facut o pereche de 2 * 5, care mai adauga un 0 la n!. Numarul total de 5 pe care ii gasim 
///reprezinta si numarul de zerouri din numarul n!.
///
///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu memorez elementele din 
///fisier.
///
///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg sirul o singura data.


#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin ("bac-T8.txt");

int main()
{
    int n, nr_de_zero = 0, nr_max_de_zero = -1, nr_de_numere = 0;
    while(fin >> n){
        int i = 1;

          ///am verificat numerele care sunt divizibile cu 5, cu 5 * 5, s.a.m.d si le-am 
          ///adunat la nr_de_zero

        while(n / pow(5, i)){
            nr_de_zero += n / pow(5, i);
            i++;
        }

          ///in nr_max_de_zero retin valoarea maxima de zerouri pe care il poate avea un n! din sir

        if(nr_max_de_zero < nr_de_zero){
            nr_max_de_zero = nr_de_zero;
            nr_de_numere = 1;
        }

          ///si in nr_de_numere numarul de n! din sir care au valoarea maxima

        else if(nr_max_de_zero == nr_de_zero)
            nr_de_numere++;
        nr_de_zero = 0;
    }
    cout << nr_de_numere << " " << nr_max_de_zero << '\n';
    return 0;
}

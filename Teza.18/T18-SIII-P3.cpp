
///       problema zice ca trebuie alcatuit nr final cu cifrele distincte care au diferenta in modul 2, dar 0? in exemplu 
///   pentru numerele 1012 3367 9837 369 96 183 se afiseaza 33333111, dar nu ar trebui sa afiseze 333331110 pentru ca 
///   diferenta lor in modul este tot 2 si numarul este mai mare? tot in exemplu vedem ca ni-l da pe 20 ca fiind un 
///   nr care respecta cerinta, deci putem sa-l folosim si pe 0. eu am facut problema cum am crezut eu ca este corect.

///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg o singura data sirul
///
///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu memorez sirul

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T18.txt");

int main()
{
    int n, v_fr_cif[10] = {0}, primul_nr_fr = 0, primul_nr = -1, al_doilea_nr = -1, nr_final = 0;
    
      ///creez vectorul care reprezinta frecventa cifrelor cifrelor din fisier

    while(fin >> n){
        while(n){
            v_fr_cif[n % 10]++;
            n /= 10;
        }
    }
    
      ///parcurg vectorul, cautand perechea cea mai mare de cifre care respecta conditia din if si memorand pozitile respective

    for(int i = 1; i + 2 <= 9; i++)
        if(primul_nr_fr <= v_fr_cif[i + 2] && v_fr_cif[i] != 0 && v_fr_cif[i + 2] != 0){
            primul_nr_fr = v_fr_cif[i + 2];
            primul_nr = i + 2;
            al_doilea_nr = i;
        }      
    
      ///creez numarul care este alcatuit din nr care respecta conditia

    for(int i = 9; i >= 1; i--){
        if(i == primul_nr){
            while(v_fr_cif[i]){
                nr_final = nr_final * 10 + i;
                v_fr_cif[i]--;
            }
        }
        else if(i == al_doilea_nr){
            while(v_fr_cif[i]){
                nr_final = nr_final * 10 + i;
                v_fr_cif[i]--;
            }
            break;
        }    
    }

    while(v_fr_cif[0]){
        nr_final = nr_final * 10;
        v_fr_cif[0]--;
    }

      ///daca in primul for nu se aplica conditia in niciun caz, atunci valorile primul_nr si al_doilea_nr sunt zero
      ///asa ca si nr_final o sa fie tot zero

    if(nr_final != 0)
        cout << nr_final << '\n';
    else 
        cout << "Nu exista" << '\n';
    return 0;
}

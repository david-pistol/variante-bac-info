#include <iostream>
#include <fstream>
using namespace std;

ofstream fout ("bac-T25.txt");

int main()
{
    bool ok = false;
    int k, t = 1, l, c, val_curenta = 0;
    cin >> k;
    while(true){  ///cat timp nu se ajunge la break-ul final

          ///m-am gandit la triunghiuri ca fiind niste arii de sub diagonala principala dintr-o matrice patratica,
          ///dar simulez doar mersul sub aceasta fara sa o creez propriu-zis
        
        for(int i = 1; i <= t + 1; i++){
            for(int j = 1; j < i; j++){
                if(val_curenta == k){   ///daca valoarea curenta este egala cu k atunci opresc cautarea, tinand minte pozitia de pe linie
                    ok = true;
                    c = j;
                    break;
                }
                val_curenta++;    ///daca nu cresc valoarea curenta cu unu 
            }
            if(ok == true){   ///daca am oprit cautarea in al doilea for opresc cautarea si in primul, memorand linia 
                l = i;
                break;
            }
        }
        if(ok == true){   ///daca am oprit cautarea in primul for opresc cautarea si in while, scazand din t unu 
            t--;          ///deoarece am dedus ca nr triungiului este egal cu nr de linii de sub diagonala principala minus unu 
            break;
        }
        t++;
    }
    
      ///afisez l - 1 deoarece o linie este in plus de la diagonala principala.
      ///dupa logica mea indexarea liniilor incepe de la 2

    fout << t << " " << l - 1 << " " << c;

    return 0;
}

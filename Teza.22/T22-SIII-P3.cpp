
///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu memorez sirul din fisier si nu folosesc
/// tablouri unidimensionale/bidimensionale.
///
///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg sirul o singura data.

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T22.txt");

int main()
{
    int n, m, min1 = 1000, min2 = 1000, cnt_7 = 0;
    fin >> n;
    while(fin >> m){
        cnt_7++;
        if(m < min1){   ///daca cel mai mic nr(min1) este mai mare decat m atunci min2 devine al doilea cel mai mic si min1 devine m
            swap(min1, min2);
            min1 = m;
        }
        else if(m < min2 && m > min1)   ///daca m este mai mare decat min1, dar este mai mic decat min2 atunci inlocuiesc doar m2 cu m
            min2 = m;

        if(cnt_7 == 7){     ///daca am ajuns la capatul unei secvente din sir, atunci verificam valorile min1 si min2 
            if(min2 == 1000){   ///daca min2 nu si-a modificat valoarea inseamna ca toate nr au fost identice in secventa, 
                min2 = min1;    ///asa ca ii dau valoare lui min1
            }
            if(min1 != min2)    ///daca valorile sunt diferite inseamna ca au existat valori distincte in secventa si afisam valorile 
                cout << min1 << " " << min2 << " ";
            else
                cout << "0" << " ";   ///in caz contrar, elementele din secventa au fost identice asa ca afisez 0
            min1 = 1000;
            min2 = 1000;
            cnt_7 = 0;
        }
    }
    return 0;
}


///   Algoritmul este eficient din punct de vedere al timpului deoarece trec prin sir o singura data

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin ("bac-T10.txt");

int main()
{
    int n, v_fr[30] = {0};    ///v_fr retine cate numere din sir corespund cu intervalul [k, k + 1)
    int fr_maxima = -1, copie_pt_k = 0;
    while(fin >> n){

          ///aici cresc valoarea cu unu pe pozitia k care respecta conditia

        for(int k = 1; k <= 30; k++) 
            if(n >= pow(2, k) && n < pow(2, k + 1)){
                copie_pt_k = k;   ///retin pozitia k
                v_fr[k]++;
                break;
            }

          ///daca tot trec prin sir vreau sa retin si pozitia maxima 

        if(fr_maxima < v_fr[copie_pt_k])
            fr_maxima = v_fr[copie_pt_k];
        copie_pt_k = 0;
    }

        ///trec prin v_fr de la sfarsit la inceput si in momentul
        ///in care gasesc valoarea maxima afisez k-ul si opresc cautarea

    for(int k = 30; k >= 1; k--)
        if(v_fr[k] == fr_maxima){
            cout << k << '\n';
            break;
        }
    return 0;
}

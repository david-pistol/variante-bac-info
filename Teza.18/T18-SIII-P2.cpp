#include <iostream>
#include <cmath>
using namespace std;

int perechi(int n, int v[])
{
    int nr_perechi = 0;
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <= n; j++){    ///verific primul nr cu toate d dupa el, aldoilea cu toate dupa el s.a.m.d deoarece nr sunt distincte
            int aux_nr_j = v[j];
            int nr_j_invers = 0;
            while(aux_nr_j){    ///creez inversul nr
                nr_j_invers = nr_j_invers * 10 + (aux_nr_j % 10);
                aux_nr_j /= 10;
            }
            if(v[i] == nr_j_invers){    ///daca inversul este egal cu v[i], nr_perechi creceste cu unu si dupa opresc
                nr_perechi++;           ///imi cere doar nr perechilor, nu si care sunt intr-o pereche si mai stim si ca sunt numere distincte
                break;
            }
        }
    }
    return nr_perechi;
}

int main()
{
    int n, v[55];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    cout << perechi(n, v) << '\n';
    return 0;
}

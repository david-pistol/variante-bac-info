
///Creez un vector de frecventa care memoreaza 18 elemente
///deoarece stiu ca cele 1.000.000 valori sunt cuprinse in intervalul [-9, 9].
///In momentul in care citesc un nr din fisier cresc valoarea din vectorul de frecventa
///de pe pozitia n + 9, astfel reusind sa retin si frecventa elementelor negative.
///
///Algoritmul este eficient din punct de vedere al memoriei deoarece nu memorez sirul din fisier
///si folosesc doar un singur vector cu 18 elemente.
///
///Algoritmul este eficient din punct de vedere al timpului deoarece parcurg sirul de valori o singura data.

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T12.txt");

int main()
{
    int n, v_fr[20] = {0}, frecventa_max = -1;

    while(fin >> n){
        v_fr[n + 9]++;
        if(v_fr[n + 9] > frecventa_max)
            frecventa_max = v_fr[n + 9];
    }

    for(int i = 0; i <= 20; i++)
        if(v_fr[i] == frecventa_max)
            cout << i - 9 << " ";
    cout << '\n';
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m[15][15], nr_baza_10 = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> m[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            nr_baza_10 += m[i][n - j - 1] * pow(2, j);  ///nr_baza_10 reprezinta nr in baza 10 de pe un rand 
        cout << nr_baza_10 << " ";  ///il afisez
        nr_baza_10 = 0;
    }
    return 0;
}

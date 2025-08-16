#include <iostream>
using namespace std;

int main()
{
    int n, v[15][30] = {0};
    cin >> n;

      ///creez prima jumatate a matricei

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){    ///parcurg matricea de la 1 pana la n ca la o matrice patratica
            if(i == j)    ///verific diagonala principala 
                v[i][j] = 1;
            else 
                v[i][j] = 2;
        }

      ///creez a doua jumatate a matricei

    for(int i = 1; i <= n; i++)
        for(int j = n; j <= 2 * n - 1; j++){  ///incep cu j de la n pana la finalul nr de coloane
            if(i + j == 2 * n)  ///i + j == 2 * n - 1 + 1 pentru diagonala secundara => i + j == 2 * n 
                v[i][j] = 1;
            else 
                v[i][j] = 2;
        }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2 * n - 1; j++)
            cout << v[i][j] << " ";
        cout << '\n';
    }
    return 0;
}

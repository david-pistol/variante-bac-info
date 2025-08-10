#include <iostream>
using namespace std;

int nr_cif(int n){
    int cnt = 0;
    while(n){
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int n, m[55][55], nr_max = -1;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> m[i][j];

      ///caut cel mai mare nr de pe diagonala principala si secundara

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            if(i == j && m[i][j] > nr_max)
                nr_max = m[i][j];
            else if(i + j == n + 1 && m[i][j] > nr_max)
                nr_max = m[i][j];
        }

      ///inlocuiesc nr pare si cu nr de cifre mai mic sau egal cu 3 cu numarul maxim

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(m[i][j] % 2 == 0 && nr_cif(m[i][j]) <= 3)
                m[i][j] = nr_max;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << m[i][j] << " ";
        cout << '\n';
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, cnt_ok = 0;
    char s[20][20];
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> s[i][j];

    for(int i = 1; i <= n; i++){
        int cnt_linii = 0, cnt_coloane = 0;
        for(int j = 1; j <= n; j++){
            if(s[i][j] == 'X')    ///verific liniile
                cnt_linii++;
            if(s[j][i] == 'X')
                cnt_coloane++;    ///verific coloanele
        }
        if(cnt_linii == n || cnt_coloane== n){
            cnt_ok++;
            break;
        }
    }
    int cnt_diag_p = 0, cnt_diag_s = 0;
    for(int i = 1; i <= n; i++)
        if(s[i][i] == 'X')
            cnt_diag_p++;   ///verific diagonala principala 
    if(cnt_diag_p == n)
        cnt_ok++;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(i + j == n - 1 && s[i][j] == 'X')    ///verific diagonala secundara
                cnt_diag_s++;
    if(cnt_diag_s == n)
        cnt_ok++;
    
    if(cnt_ok != 0)   ///daca cnt_ok este modificat inseamna ca exista linii/coloane/diagonale care sunt completate numai cu X
        cout << "DA";
    else 
        cout << "NU";
    return 0;
}

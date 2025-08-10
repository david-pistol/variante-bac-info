#include <iostream>
using namespace std;

int main()
{
    double media_aritmetica = 0;
    bool ok = false;
    int n, m[50][50], cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> m[i][j];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j + 1 <= n; j++){
            if(m[j][i] > m[j + 1][i]){    ///verific daca elementele sunt in ordine crescatoare, folosind variabila ok
                ok = true;
                break;
            }
        }
        if(ok == false){    ///daca ok este false inseamna ca valorile din coloana sunt in ordine crescatoate
            media_aritmetica += m[1][i];
            cnt++;
        }
        ok = false;
    }
    
    media_aritmetica /= cnt;

    cout << media_aritmetica << '\n';
            
    return 0;
}

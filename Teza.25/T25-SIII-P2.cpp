#include <iostream>
using namespace std;

int kpal(int v[], int n, int k)
{
    bool ok = true;
    int cnt = 1;
    while(cnt <= n){  ///stiu ca nr maxim de permutari este egal cu nr de numere din sir
        for(int i = 1; i <= n / 2; i++)   ///verific daca sirul este palindrom
            if(v[i] != v[n - i + 1]){   ///daca nu este, opresc cautarea 
                ok = false;
                break;
            }
        if(ok == true){   ///daca la sfarsitul cautarii ok ramane adevarat, atunci k devine 1 si returnez k-ul 
            k = 1;
            return k;
        }
        
          ///daca nu este, atunci ultimul nr din sir il lipesc la inceput

        int aux_v_n = v[n];
        for(int i = n; i > 1; i--)
            v[i] = v[i - 1];
        v[1] = aux_v_n;

        ok = true;
        cnt++;
    }
    k = 0;
    return k;
}

int main()
{
    int n, v[100], k = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    cout << kpal(v, n, k);
    return 0;
}

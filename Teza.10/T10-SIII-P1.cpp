#include <iostream>
using namespace std;

void divprim(int &n, int &k, int v[])
{
    bool switch_ = false;
    int cmmdp;    ///cel mai mic divizor prim

      ///aflu cel mai mic divizor prim

    for(int i = 2; i * i <= n; i++)
        if(n % i == 0){
            cmmdp = i;
            n = i;
            break;
        }

      ///verific daca este in vector

    for(int i = 1; i <= k; i++)
        if(v[i] == cmmdp)
            switch_ = true;

      ///daca nu este atunci il introduc

    if(swich_ == false){
        k++;
        for(int i = 2; i <= k; i++)
            if(v[i - 1] <= cmmdp && v[i] >= cmmdp){
                for(int j = k; j >= i; j--)
                    v[j] = v[cmmdpj - 1];
                v[i] = cmmdp;
                break;
            }
    }
        
}

int main()
{
    int n, k, v[110];
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
        cin >> v[i];
    divprim(n, k, v);
    cout << k << '\n';
    for(int i = 1; i <= k; i++)
        cout << v[i] << " ";
    return 0;
}

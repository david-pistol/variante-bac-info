#include <iostream>
using namespace std;

///nu am inteles cerinta. daca exista cel mai mic divizor prim pt toate nummerele, atunci p nu devine automat 1?
///pentru ca fr la puterea 1 este tot fr si este divizor pentru toate numerele(asta in cazul in care exista)

void factor(int n, int v[], int &fr, int &p)
{
    int v_div_primi[1005] = {0};
    for(int i = 1; i <= n; i++)   ///creez un vector de frecventa care contine frecventa primilor divizori primi pentru fiecare nr din vector
        for(int j = 2; j * j <= v[i]; j++)
            if(v[i] % j == 0){
              v_div_primi[j]++;
              break;
            }
    bool ok = false;
    for(int i = 2; i <= 999; i++)
        if(v_div_primi[i] == n){  ///in momentul in care gasesc un divizor prim care are frecventa egala cu n, atunci 
            fr = i;               ///fr primeste divizorul respectiv si p devine 1 
            p = 1;
            ok = true;
            break;
        }
    if(ok != true){
        fr = -1;
        p = 0;
    }

}

int main()
{
    int n, v[55], fr, p;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    factor(n, v, fr, p);
    cout << fr << " " << p;
    return 0;
}

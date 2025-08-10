
///MI-A MANCAT VIATA PROBLEMA ASTFGVFGDV. cred ca este gresit exemplul. am facut un desen pe foaie, folosind exemplul, si rezultatul a fost tot intervalul 3, 4

///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu memorez sirul
///
///   Algoritmul este eficient din punct de vedere al timpului deoarece trec o singura data prin sir

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac-T16.txt");

int main()
{
    int n, m, max_st, min_dr = 1005;
    fin >> n;
    max_st = n;

      ///aflu maximul din stanga si minimul din dreapta a tuturor intervalelor

    while(fin >> m){
        if(n + 1 != m){
            if(min_dr > n)
                min_dr = n;
            if(max_st < m)
                max_st = m;
        }
        n = m;
    }

      ///daca partea din stanga este mai mare decat partea din dreapta nu putem avea un interval 

    if(max_st > min_dr)
        cout << "MULTIMEA VIDA" << '\n';
    else
        cout << max_st << " " << min_dr << '\n';
    return 0;
}

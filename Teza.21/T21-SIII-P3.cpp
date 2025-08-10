#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T21.txt");

int main()
{
    int n, m1, m2, m_curent, v[1005] = {0};
    fin >> n;
    fin >> m1 >> m2;
    for(int i = 1; i <= n - 2; i++){    ///fac un vector de frecventa cu nr varf
        fin >> m_curent;
        if(m1 < m2 && m2 > m_curent)
            v[m2]++;
        m1 = m2;
        m2 = m_curent;
    }

    bool ok = false;
    for(int i = 1; i <= 999; i++)   ///le afisez in ordine crescatoare 
        if(v[i] != 0){
            ok = true;
            cout << i << " ";
        }
    if(ok == false)   ///daca nu se afiseaza niciun nr, atunci afisez mesajul nu exista 
        cout << "Nu exista";
    return 0;
}

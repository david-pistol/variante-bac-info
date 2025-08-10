
///algoritmul este eficient din punct de vedere al timpului deoarece nu trec prin toate numerele,
///ci trec numai prin numerele care sunt divizibile cu cel mai mic divizor citit de la tastatura
///
///algoritmul este eficient din punct de vedere al memoriei deoarece eu nu folosesc deloc memoria,
///folosind doar afisarea atunci cand ajung la nr dorit.

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ofstream fout ("bac_T3.txt");

int main()
{
    int n, m, k, nr_min, cnt;
    cin >> n >> m >> k;
    
      ///aflu cel mai mic divizor

    if(n < m)
        nr_min = n;
    else {
        nr_min = m;
    }

      ///creez cel mai mic nr cu k cifre

    cnt = pow(10, k - 1);
    
      ///atata timp cat cnt are nai putin de k + 1 cifre verifica daca cnt se imparte la cei doi divizori
      ///daca da il afiseaza in fisier

    while(cnt < pow(10, k)){
        if(cnt % n == 0 && cnt % m == 0){
            fout << cnt << " "; ///cout << cnt << " ";
        }
        cnt += nr_min;
    }
    cout << "\n";
    return 0;
}

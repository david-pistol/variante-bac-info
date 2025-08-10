
///algoritmul este eficient din punct de vedere al timpului deoarece parcurg o singura data sirul
///
///algoritmul este eficient din punct de vedere al memoriei deoarece nu memorez sirul

#include <fstream>
#include <cmath>
using namespace std;

ifstream fin ("bac-T7-in.txt");
ofstream fout ("bac-T7-out.txt");

int main()
{
    int v_nr_zero[15] = {0}, n, cnt = 0;
    while(fin >> n){
          
              ///aflu numarul de zerouri pe care il are numarul

          int aux_n = n;
          while(aux_n){
              cnt++;
              aux_n /= 10; 
          }
          cnt--;  ///scad contorul cu unu pentru ca 100 are 3 cifre, dar numai 2 sunt zero
          v_nr_zero[cnt]++;  ///pozitiile din vector reprezinta ce numar este. pe pozitia 2 o sa fie numarul de numere care sunt egale cu 100, la 3 cu 1000 s.a.m.d.
          cnt = 0;
    }

    for(int i = 0; i <= 9; i++)
        if(v_nr_zero[i] != 0){///daca pozitia curenta din vectorul de frecventa are o valoare diferita de zero asta inseamna ca exista numere cu i zerouri
            int m = v_nr_zero[i];
            
              ///afisez cate numere imi zice v_nr_zero[i] ca exista in sir

            for(int j = 1; j <= m; j++)
                fout << pow(10, i) << " ";
        }
    return 0;
}

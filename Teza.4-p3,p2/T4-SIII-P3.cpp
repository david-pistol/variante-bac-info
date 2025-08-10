
///programul este eficient din punct de vedere al timpului deoarece parcurg sirul o singura data
///
///programul este eficient din punct de vedere al memoriei deoarece memoder doar 199 de elemente

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin ("./bac_T4.txt");

int main()
{
  int v_fr[199] = {0}, n, frec_max = -1, poz;

    ///parcurg sirul

  while(fin >> n){
      
        ///poz reprezinta numarul din sir si cresc valoarea de pe pozitia poz cu unu
        ///
        ///am folosit un offset pentru a putea include in vectorul de frecventa si numerele pozitive
      
      poz = n + 99;
      v_fr[poz]++;
      if(v_fr[poz] > frec_max)
          frec_max = v_fr[poz];
  }
  
    ///cand afisez numerele scad din ele 99 pentru a ajunge la rezultatul corect
    
  for(int i = 0; i <= 199; i++)
      if(v_fr[i] == frec_max)
          cout << i - 99 << " ";

  return 0;
}

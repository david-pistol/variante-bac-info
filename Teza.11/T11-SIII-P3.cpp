
///   Algoritmul este eficient din punct de vedere al memoriei deoarece nu folosesc tablouri de elemente
///
///   Algoritmul este eficient din punct de vedere al timpului deoarece folosesc un singur for care merge de la 2 la n(maxim 15)

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T11.txt");

int main()
{
    int n, nr_cutii = 1, nr_stive = 1;  ///nr_cutii este 1 la inceput deoarece am prima stiva cu o cutie si
                                        ///nr_stive este egal cu 1 deoarece am prima stiva
    fin >> n;
    
      ///pornesc de la a doua stiva si calculez nr de cutii si de stive din prima jumatate

    for(int i = 2; i < n; i++){
        nr_cutii += i + 1;
        nr_stive += 2;
    }

      ///acuma calculez nr total de cutii si stive fara cea din mijloc

    nr_cutii *= 2;
    nr_stive *= 2;

      ///adaug nr de cutii din stiva din mijlor si cresc nr de stive cu 1

    nr_cutii += n;
    nr_stive += 1;

    cout << nr_stive << " " << nr_cutii << '\n';

    return 0;
}

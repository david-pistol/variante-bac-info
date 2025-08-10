
///   Algoritmul este eficient din punct de vedere al timpului deoarece parcurg o singura data sirul din fisier.

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin ("bac-T20.txt");

int numar_interior(int n)   ///functie care imi returneaza numarul interior
{
    n /= 10;
    int aux_n = n, cnt = 0;
    while(aux_n){
        cnt++;
        aux_n /= 10;
    }
    return n % (int)pow(10, cnt - 1);   ///functiile din cmath pot sa returneze si double, asa ca convertesc valoarea in int 
                                        ///ca sa fiu sigur
}

int prima_cifra(int n)
{
    while(n >= 9)
        n /= 10;
    return n;
}

int ultima_cifra(int n)
{
    return n % 10;
}

int main()
{
    int n, v[1005] = {0};   ///vector de frecventa pentru numerele interioare
    while(fin >> n){
        if(prima_cifra(n) == ultima_cifra(n))   ///daca prima si ultima cifra sunt egale atunci crestem valoarea de pe pozitia nr interior
            v[numar_interior(n)]++;
    }
    bool ok = false;
    for(int i = 1000; i >= 1; i--)    ///parcurg vectorul v descrescator pentru a afisa numerele interioare
        if(v[i] != 0){    ///daca exista cel putin un nr interior atunci ok devine true pt a semnala faptul ca exista astfel de numere
            ok = true;
            cout << i << " ";
        }
    if(ok == false)
        cout << "Nu exista" << '\n';
    return 0;
}


///programul este eficient din punct de vedere al timpului deoarece trec o singura data prin sir si
///folosesc un algoritm destul de eficient pentru a afla daca nr este prim
///
///programul este eficient din punct de vedere al memoriei deoarece nu memorez sirul

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T5.txt");

    ///funcfie care verifica daca nr este prim

bool prim(int n)
{
    bool switch_ = false;
    if(n == 2)
        return true;
    else if(n == 1)
        return false;
    else {
        for(int i = 2; i <= n / 2; i++)
            if(n % i == 0){
                switch_ = true;
                break;
            }
        if(switch_ == true)
            return false;
        else
            return true;
    }
}

int main()
{int
    int n, cnt = 1, nr_max = -1;
    while(fin >> n)
    {
        if(prim(n) != true){///daca nr nu este prim ii cresc valoarea pana cand numarul devine prim
            while(prim(n) == false){
                n++;
                cnt++;///cnt imi arata de cate ori am modificat numarul pana cand a ajuns prim
            }
            if(cnt > nr_max)///numarul maxim reprezinta numarul paxim de modificari pe care l-a avut un nr din sir, respectiv numarul de prelucari
                nr_max = cnt;
        }
        cnt = 1;

    }
    if(nr_max != -1)
        cout << nr_max << '\n';
    else 
        cout << 1 << '\n';
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, cnt = 0;   ///cnt reprezinta nr de caractere(inclusiv spatiul) de pe o linie
    char s[205], sep[] = " ";
    cin >> n;
    cin.ignore();   ///am aflat ca atunci cand citesc n, in buffer ramane caracterul \n care este citit de getline si nu mai citeste sirul
    cin.getline(s, 205);
    char * p = strtok(s, sep);
    while(p){
        
          ///daca nr caracterelor este mai mic decat n, atunci afisez cuvantul si adaug la cnt nr de caractere al cuvantului
          ///plus 1 care reprezinta spatiul

        if(strlen(p) + cnt < n){
            cout << p << " ";
            cnt += strlen(p);
            cnt++;
        }

          ///daca nr caracterelor este mai mare decat n, atunci completez sirul cu caracterul *
          ///de n - cnt ori si cnt devine nr de caractere pe care il are p + 1 deoarece linia incepe cu p plus spatiul

        else if(strlen(p) + cnt > n){
            for(int i = 1; i <= n - cnt; i++)
                cout << "*";
            cout << '\n';
            cout << p << " ";
            cnt = strlen(p) + 1;
        }

          ///daca nr caracterelor este egal cu n, atunci afisez cuvantul si cnt devine 0

        else if(strlen(p) + cnt == n){
            cout << p;
            cout << '\n';
            cnt = 0;
        }
        p = strtok(NULL, sep);
    }
    return 0;
}

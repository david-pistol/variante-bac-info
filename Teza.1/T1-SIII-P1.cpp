#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[105], sep[] = "#", j[105];
    int nr_litere_max = 0;
    cin.getline(s, 105);
    strcpy(j, s);
    char * p = strtok(s, sep);

    ///aflu nr cel mai mare de litere pe care il are un cuvant din sir

    while(p != NULL)
    {
        if(strlen(p) > nr_litere_max)
            nr_litere_max = strlen(p);
        p = strtok(NULL, sep);
    }

    ///afisez pe rand cuvintele

    char * o = strtok(j, sep);
    while(o != NULL)
    {
        ///daca cuvantul are nr maxim de litere il inversez
        
        if(strlen(o) == nr_litere_max)
          {
            for(int i = strlen(o); i >= 0; i--)
                cout << o[i];
          }

        ///in caz contrar il afisez pur si simplu

        else {
            cout << o;
        }
        cout << "#";
        o = strtok(NULL, sep);
    }
    cout << "\n";
    return 0;
}

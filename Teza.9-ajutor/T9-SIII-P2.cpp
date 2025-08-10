#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int lungime_sufix;
    char s[260], c[40], t[40], sep[] = " ";
    cin.getline(s, 260);
    cin >> c;

      ///aflu sufixul cuvantului c care trebuie sa rimeze

    for(int i = strlen(c) - 1; i >= 0; i--)
        if(strchr("aeiou", c[i]) != NULL){
            strcpy(t, c + i);
            lungime_sufix = i;
            break;
        }

      ///daca gasesc un cuvant care rimeaza cu c, atunci il afisez

    char * p = strtok(s, sep);
    while(p){
        if(strcmp(p + (strlen(p) - lungime_sufix), t) == 0)
            cout << p << '\n';
        p = strtok(NULL, sep);
    }
    return 0;
}

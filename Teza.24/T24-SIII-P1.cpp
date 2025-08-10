#include <iostream>
#include <cstring>
using namespace std;

bool palindrom(char p[])    ///verifica daca cuvantul este palindrom
{
    bool pali = true;
    for(int i = 0; i <= (strlen(p) - 1) / 2; i++)
        if(p[i] != p[strlen(p) - 1 - i]){
            pali = false;
            break;
        }
    return pali;
}

int main()
{
    char s[405], sep[] = " ", t[405];
    cin.getline(s, 405);
    char * p = strtok(s, sep);
    while(p){
        if(palindrom(p) == true)  ///daca cuvantul este palindrom atunci transform literele cuvantului in litere mari
            for(int i = 0; i <= strlen(p); i++)
                p[i] = toupper(p[i]);
        strcat(t, p);   ///lipesc cuvantul de sirul t 
        strcat(t, sep);   ///adaug spatiu 
        p = strtok(NULL, sep);
    }
    strcpy(s, t);   ///il copiez pe t in sirul s
    cout << s << '\n';
    return 0;
}

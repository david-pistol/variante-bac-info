#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[205], sep[] = " ";
    cin.getline(s, 205);
    char * p = strtok(s, sep);
    while(p){
        bool swich = true;
        for(int i = 0; i < strlen(p); i++) ///parcurg tot cuvantul pentru a observa daca exista cel putin o cifra in acesta
            if(isdigit(p[i]) != 0){
                swich = false; ///daca am gasit o cifra, swich devine false si opresc cautarea cu un break
                break;
            }
        if(swich == true)
            cout << (char)toupper(p[0]);  ///am observat ca imi returna valoarea ASCII a literei, cu litera in sine
                                          ///asa ca am convertit fiecare prima litera inapoi la char
        p = strtok(NULL, sep);
    }
    return 0;
}

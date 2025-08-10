#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

ifstream fin ("bac-T23.txt");

int main()
{
    char s[1000005], a[] = "a";
    int poz_a = (int)a[0];    ///codul ASCII pentru a
    int v_alfabet[150] = {0};
    fin.getline(s, 1000005);    ///citesc sirul
    int n = strlen(s); 
    for(int i = 0; i < n; i++){   ///stransform litera curenta in litera mica si cresc valoare de pe pozitia (int)s[i] din vectorul de frecventa
        s[i] = tolower(s[i]);
        v_alfabet[(int)s[i]]++;
    }
    bool ok = false;  ///verifica daca exista litere care respecta cerinta
    for(int i = poz_a; i <= 149; i++)   ///parcurg vectorul v_alfabet de la a(in codul ASCII)
        if(v_alfabet[i] != 0 && v_alfabet[i] % 2 != 0){///verific daca valoarea este diferita de 0 si daca valoarea este impara
            ok = true;
            for(int j = 1; j <= v_alfabet[i]; j++)  ///daca da, afisez ca char pozitia in functie de numarul de aparitii
                cout << (char)i;
        }
    
    if(ok == false)   ///daca ok este false inseamna ca nu avem astfel de litere care respecta cerinta 
        cout << "Nu exista";
    return 0;
}

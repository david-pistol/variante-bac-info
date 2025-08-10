#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[255], t[255];
    cin.getline(s, 255);
    int cnt_modificari = 0, i = 0, j;

    while(i < strlen(s) - 1){   ///merg cu i pana la strlen(s) - 2 deoarece merg cu j pana la strlen(s) - 1
        j = i + 1;

          ///incepand cu pozitia curenta + 1 merg pana cand gasesc un caracter identic

        while(j < strlen(s)){
            if(s[i] == s[j]){   
                if(s[j + 1] != s[j])    ///daca l-am gasit, mai intai ma asigur ca urmatorul caracter sa nu fie la fel pentru a afla nr minim de modificari
                    cnt_modificari++;
                for(int k = i; k <= j; k++){    ///elimin fiecare caracter incepand de pe pozitia i pana la pozitia p
                    strcpy(t, s + i + 1);
                    strcpy(s + i, t);
                }
                i = 0;    ///deoarece modific lungimea sirului, este posibil ca i-ul sa nu mai reprezinte pozitia curenta, 
                          ///asa ca parcurg de la inceput noul sir
                break;
            }
            else
                j++;
        }
        i++;
    }
    
    for(int k = 0; k < strlen(s); k++)
        cout << s[k];
    cout << " " << cnt_modificari;
    return 0;
}

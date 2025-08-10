#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[260], t[260], sep[] = " ", s_temporar[260], sufix[] = "* ";
    cin.getline(s, 260);
    strcpy(t, s);   ///in t copiez sirul s ca sa pot sa lucrez cu strtok pe t
    char * p = strtok(t, sep);
    while(p){
        char jumate[100], copie[100];
        strcpy(jumate, p + (strlen(p)) / 2);  ///acum jumate este jumatate din cuvantul curent
        strcpy(copie, jumate);
        strcat(jumate, copie);    ///acum l-am dublat pe jumate pentru a vedea daca dupqa aceasta modificare ramane la fel

          ///daca ramane la fel, atunci in s_temorar adaug jumatatea cuvantului si "*" si " "

        if(strcmp(p, jumate) == 0){
            strcat(s_temporar, copie);
            strcat(s_temporar, sufix);
        }

          ///daca nu ramane la fel, atunci adaug cuvantul cum este el si mai adaug un spatiu dupa

        else {
            strcat(s_temporar, p);
            strcat(s_temporar, sep);
        }
        p = strtok(NULL, sep);
    }

      ///copiez in sirul s sirul s_temporar

    strcpy(s, s_temporar);

    for(int i = 0; i < strlen(s); i++)
        cout << s[i];
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    bool ok = false;
    char s[505], t[505], c[15], sep[] = " ", anterior[30];
    cin.getline(s, 505);
    cin.get(c, 15);
    
      ///mai intai lucrez pentru primele doua cuvinte

    char * p = strtok(s, sep);
    strcpy(anterior, p);    ///anterior este cuvantul anterior citit
    p = strtok(NULL, sep);    ///p este urmatorul cuvant 
    strcat(t, anterior);    ///am lipit primul cuvant in sirul t
    strcat(t, sep);   ///am adaugat un spatiu 
    if(strcmp(p, c) == 0 && strchr("aeiou", anterior[0]) == NULL){    ///daca p este egal cu c si prima litera din cuvantul anterior este consoana
        strcat(t, p);                                                 ///adaug cuvantul curent
        strcat(t, sep);
    }
    else if(strcmp(p, c) != 0){          ///daca cuvantul curent nu este c atunci il lipesc la t
        strcat(t, p);
        strcat(t, sep);
    }
    strcpy(anterior, p);
    p = strtok(NULL, sep);
    while(p){
        if(strcmp(p, c) == 0 && strchr("aeiou", anterior[0]) == NULL){
            strcat(t, p);
            strcat(t, sep);
        }
        else if(strcmp(p, c) != 0){
            strcat(t, p);
            strcat(t, sep);
        }
        else if(strcmp(p, c) == 0 && strchr("aeiou", anterior[0]) != NULL)
            ok = true;
        strcpy(anterior, p);
        p = strtok(NULL, sep);
    }

    strcpy(s, t);

    if(ok == false)
        cout << "Textul nu s-a modificat";
    else
        cout << s;
    return 0;
}

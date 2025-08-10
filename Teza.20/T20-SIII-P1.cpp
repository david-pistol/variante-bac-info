#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i = 0, nr = 0, prod_nr = 1;
    char s[25];
    cin.get(s, 25);
    while(i < strlen(s)){
        if(strchr("0123456789", s[i]) != NULL){   ///daca caracterul este cifra in nr adaug cifrele pana nu mai gasesc
            while(strchr("0123456789", s[i]) != NULL && s[i] != '\0'){
                nr = nr * 10 + ((int)s[i] - 48);    ///codul ASCII al lui 0 ii 48
                i++;
            }
            prod_nr *= nr; 
            nr = 0;
            i--;
        }
        i++;

    }
    cout << prod_nr;
    return 0;
}

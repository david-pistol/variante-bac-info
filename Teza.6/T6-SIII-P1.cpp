#include <iostream>
using namespace std;

int main()
{
    int nr_litere_max = 0, nr_cuv_max = 0;
    char s[105], t[105], sep[] = " ";
    cin.getline(s, 105);
    strcpy(t, s);///copiez sirul initial in t

      ///calculez care este nr maxim de litere dintr-un cuvant

    char * p = strtok(s, sep);
    while(p){
        if(strlen(p) > nr_litere_max)
            nr_litere_max = strlen(p);
        p = strtok(NULL, sep);
    }

      ///calculez nr de cuvinte din sir care au nr maxim de litere

    char * o = strtok(t, sep);
    while(o){
        if(strlen(o) == nr_litere_max)
            nr_cuv_max++;
        o = strtok(NULL, sep);
    }
    cout << nr_litere_max << " " << nr_cuv_max << '\n';
    return 0;
}

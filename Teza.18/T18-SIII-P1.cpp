#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[205], c[25], t[205], sep1[] = ".", sep2[] = " ";
    int nr_prop = 0, nr_cuv_c = 0, nr_cuv_c_max = 0, nr_prop_max = 0;
    cin.get(c, 25);
    cin.ignore();
    cin.getline(s, 205);

    strcpy(t, s);   ///copiez in t sirul s deoarece distrug sirul s 

    char * p = strtok(s, sep1);   ///cu p retin propozitiile
    while(p){
        nr_cuv_c = 0;   ///nr de cuvinte care sunt egale cu c 
        nr_prop++;
        char * o = strtok(p, sep2);
        while(o){   ///cu o retin cuvintele 
            if(strcmp(c, o) == 0)   ///numar care cuvinte din propozitia curenta sunt egale cu c
                nr_cuv_c++;
            o = strtok(NULL, sep2);
        }
        if(nr_cuv_c > nr_cuv_c_max){    ///retin numarul maxim de cuvinte care sunt egale cu c dintr-o propozitie si nr propozitiei 
            nr_cuv_c_max = nr_cuv_c;
            nr_prop_max = nr_prop;
        }
        p = strtok(NULL, sep1);
    }
    
    p = strtok(t, sep1);
    nr_prop = 0;
    while(p){
        nr_prop++;
        if(nr_prop == nr_prop_max){   ///daca ajung la propozitia cu cele mai multe cuvnte egale cu c, o afisez si pun un punct la final
            cout << p << "." << '\n';
            break;
        }
        p = strtok(NULL, sep1);
    }

    return 0;
}

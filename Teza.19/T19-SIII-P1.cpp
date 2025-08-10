#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int k = 0, i = 0;
    char s1[45], s2[45], t[45];
    cin.get(s1, 45);
    cin.get();
    cin.get(s2, 45);
    int n1 = strlen(s1);
    while(i < strlen(s1)){
        if(strchr("aeiou", s1[i]) != NULL){   ///daca gasesc o vocala in s1
            strcpy(t, s2 + k);    ///adaug vocala in s2 pe pozitia para 
            strcpy(s2 + k + 1, t);
            s2[k] = s1[i];
            strcpy(t, s1 + i + 1);    ///elimin vocala din s1 
            strcpy(s1 + i, t);
            k += 2;
            i--;
        }
        i++;
            
    }
    cout << s1 << " " << s2 << '\n';
    return 0;
}

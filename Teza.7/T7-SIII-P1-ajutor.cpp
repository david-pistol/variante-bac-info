
///exemplul din Teza cred ca este gresit

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[105], c[105];
    cin >> s >> c;
    int zero = (int)'0'; ///folosesc codul ASCII al lui 0
    for(int i = 0; i < strlen(s); i++){
          
          ///transform caracterele in codul lor ASCII
        
        int a = (int)s[i];
        int b = (int)c[i];

          ///din codul ASCII al cifrei curente scad codul ASCII al lui zero si ajung la cifra 
          ///apoi adun cifra cu codul ASCII al literei curente si afisez rezultatul ca char

        cout << (char)(a + (b - zero));
    }
    return 0;
}

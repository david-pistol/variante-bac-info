#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, i = 1;///plec de pe pozitia 1 ca sa pot sa compar cu caracterele din urma
    char s[200], t[200];
    cin.getline(s, 200);
    n = strlen(s);
    while(i < n){

          ///in momentul in care am aflat ca elementul curent este acelasi cu cel din urma
          ///inserez caracterul '#' si cresc cu 2 i-ul

        if(s[i] == s[i - 1]){
            strcpy(t, s + i);
            strcpy(s + i + 1, t);
            s[i] = '#';
            n++;
            i += 2;
        }
        else 
          i++;
    }
    for(int i = 0; i < n; i++)
        cout << s[i];
    return 0;
}

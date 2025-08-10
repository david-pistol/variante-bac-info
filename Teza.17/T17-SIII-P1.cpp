#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[255];
    cin.getline(s, 255);
    for(int i = 0; i < strlen(s) - 1; i++){
        if(strchr("aeiou", s[i]) != NULL && strchr("aeiou", s[i + 1]) == NULL && s[i + 1] != ' ')   ///in cazul in care vocala este prima 
           swap(s[i], s[i + 1]);
        else if(strchr("aeiou", s[i]) == NULL && strchr("aeiou", s[i + 1]) != NULL && s[i + 1] != ' ')    ///in cazul in care consoana este prima
            swap(s[i], s[i + 1]);
    }
    for(int i = 0; i <= strlen(s) - 1; i++)
        cout << s[i];
    return 0;
}

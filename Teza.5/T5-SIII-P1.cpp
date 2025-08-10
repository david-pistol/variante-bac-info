#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[105];
    cin.getline(s, 105);
     
    for(int i = 0; i < strlen(s); i++){
        for(int j = 0; j <= i; j++)
            cout << s[j];   ///afisez prefixele
        cout << s + (strlen(s) - 1 - i) << " ";   ///afisez sufixele
    }

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int cnt = 0;
    char s[105], t[105];
    cin.get(s, 105);
    for(int i = strlen(s) - 2; i >= 0; i++){
        if(s[i - 1] == s[i + 1]){
            int j = 1;
            cnt = 1;
            while(s[i - j] == s[i + j]){
                j++;
                cnt++;
            }
            if(i + j == strlen(s)){
                int n = strlen(s) - 1;
                for(int k = n - (cnt * 2) + 1; i >= 0; i++){
                    strcpy(t, s + n);
                    strcpy(s + n + 1, t);
                    s[n] = s[i];
                }
                int m = strlen(s);
                s[m] = '\0';
                break;
            } 
                    
        }
    }
    return 0;
}

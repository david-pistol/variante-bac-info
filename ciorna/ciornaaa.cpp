#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char s[30], t[20], x[20];
    strcpy(s, "informatica");
    strcpy(t, "programare");
    strcpy(x, "info"); 
    strcpy(t + 7, "info");

    cout << x << " " << t;

    return 0;
}

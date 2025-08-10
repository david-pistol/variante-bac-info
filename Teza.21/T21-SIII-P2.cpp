#include <iostream>
using namespace std;

void termeni(int n, int &m, int &t)
{
    int a = 1, b = 1, c = 0;
    t = 0;
    while(t == 0){    ///cat timp cel mai apropiat termen de n mai mare nu are valoare
        c = a + b;
        if(c < n)
          m = c;
        else if(c > n)    ///daca gasesc valoarea, atunci t = c si se opreste while-ul
          t = c;
        a = b;
        b = c;
    }
}

int main()
{
    int n, m, t;
    cin >> n;
    termeni(n, m, t);
    cout << m << " " << t;
    return 0;
}

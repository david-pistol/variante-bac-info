#include <iostream>
#include <cmath>
using namespace std;

int patrat(int n)
{
    int x;
    for(int i = n / 2; i >= 2; i--)
        if(n % i == 0){   ///verifica daca i este divizorul lui n 
            x = sqrt(i);
            if(x * x == i)  ///daca radicalul lui i la puterea a doua este egal cu i, atunci returnez i 
                return i;
        }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << patrat(n) << '\n';
    return 0;
}

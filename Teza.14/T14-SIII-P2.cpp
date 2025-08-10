#include <iostream>
#include <cmath>
using namespace std;

int regular(int n)
{
    for(int i = n; i >= 1; i--)   ///incepem de la n
        for(int j = 0; pow(2, j) <= i; j++)
            for(int k = 0; pow(3, k) <= i; k++)
                for(int h = 0; pow(5, h) <= i; h++)
                    if(pow(2, j) * pow(3, k) * pow(5, h) == i)  ///daca produsul este egal cu i atunci returnam i
                        return i;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << regular(n) << '\n';
    return 0;
}

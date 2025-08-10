#include <iostream>
#include <cmath>
using namespace std;

int prime(int n, int a[])
{
    int cnt = 0;
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++){
            int a1 = a[i];
            int b = a[j];
            while(b){   ///calculez cel mai mare divizor al numerelor a[i] si a[j]
                int r = a1 % b;
                a1 = b;
                b = r;
            }
            if(a1 == 1)   ///daca cel mai mare divizor comul este 1 atunci cnt creste
                cnt++;
        }
    return cnt;
}

int main()
{
    int n, a[55];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    cout << prime(n, a);
    return 0;
}

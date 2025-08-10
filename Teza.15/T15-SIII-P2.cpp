#include <iostream>
using namespace std;

void compact(int &n, int a[])
{
    int i = 1;
    while(i <= n){
        if(a[i + 1] == a[i]){
            for(int j = i; j <= n; j++)
                a[j] = a[j + 1];
            n--;
            i--;
        }
        i++;
    }
}

int main()
{
    int n, a[1005];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    compact(n, a);
    cout << n << '\n';
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}

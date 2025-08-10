#include <iostream>
using namespace std;

void permuta(int n, int a[], int k)
{
    int v[105];   ///am creat un vector v care este identic cu a
    for(int i = 1; i <= n; i++)
        v[i] = a[i];

    for(int i = k; i >= 1; i--)
        a[k - i + 1] = v[n - i + 1];    ///pe primele k pozitii am memorat in vectorul a ultimele k elemente in vectorul v
    
    for(int i = k + 1; i <= n; i++)     ///incepand de la k + 1 am introdus restul elementelor din vectorul v in a
        a[i] = v[i - k];
}

int main()
{
    int n, a[105], k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    permuta(n, a, k); 
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}

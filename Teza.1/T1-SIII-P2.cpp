#include <iostream>
using namespace std;

void numarare(int n, int m, int a[], int b[])
{
    int min = 10000;
    int cnt = 0;

      ///aflam cel mai mic nr din sirul b

    for(int i = 1; i <= m; i++)
        if(b[i] < min)
            min = b[i];

      ///verificam care numere din sirul a sunt mai mici decat minimul din sirul b

    for(int i = 1; i <= n; i++)
        if(a[i] < min)
            cnt = cnt + 1;

      ///afisam rezultatul

    cout << cnt << "\n";
}

int main()
{
    int n, m, a[25], b[25];
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= m; i++)
        cin >> b[i];
    numarare(n, m, a, b);
    return 0;
}

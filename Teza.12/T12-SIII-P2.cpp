#include <iostream>
#include <cmath>
using namespace std;

void perechi(int n, int m, int &k)
{
    int x, y;
    for(x = 1; x < y; x++)
        for(y = x + 1; y <= n; y++){
            int a = x, b = y;
            while(b){   ///calculez cel mai mare divizor comun
                int r = a % b;
                a = b;
                b = r;
            }
            int cmmmc = x * y / a;    ///formula care calculeaza cel mai mic multiplu comun dintre doua nr
            if(cmmmc == m){
                cout << x << " " << y << '\n';
                k++;
            }
        }
}

int main()
{
    int n, m, k = 0;
    cin >> n >> m;
    perechi(n, m, k);
    cout << k;
    return 0;
}

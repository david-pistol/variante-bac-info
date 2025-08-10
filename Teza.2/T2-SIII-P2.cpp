#include <iostream>
using namespace std;

void numarare(int a, int b)
{
    int cnt = 0;
    int nrdiv = 1;

      ///merg prin intervalul [a, b]

    for(int i = a; i <= b; i++)
    {
          ///verific numarul de divizori  
          
        for(int j = 1; j <= i / 2; j++)
        {
            if(i % j == 0)
                nrdiv++;
        }

          ///daca are doar 3 divizori nr este luat in considerare

        if(nrdiv == 3)
            cnt++;
        nrdiv = 1;
    }
    cout << cnt << "\n";
}

int main()
{
    int a, b;
    cin >> a >> b;
    numarare(a, b);
    return 0;
}

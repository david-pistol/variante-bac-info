#include <iostream>
#include <cmath>
using namespace std;

int circular(int a, int b)
{
    int aux_a = a, cnt = 0, permutari = 0;

      ///aflu cate cifre are a

    while(aux_a){
        aux_a /= 10;
        cnt++;
    }

      ///daca a = b atunci returnez numarul de permutari, daca nu atunci iau prima cifra si o pun la final

    for(int i = 1; i <= cnt; i++){
        if(a == b)
            return permutari;
        else {
            a = ((a % 10) * pow(10, cnt) + a) / 10;
            permutari++;
        }
    }
    return -1;        
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << circular(a, b) << '\n';
    return 0;
}

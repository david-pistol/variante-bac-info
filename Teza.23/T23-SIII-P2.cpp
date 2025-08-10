#include <iostream>
#include <cmath>
using namespace std;

void cifre(int &n, int &k)
{
    int v_n[15] = {0}, v_k[15] = {0}, cnt_n = 0, cnt_k = 0, aux_n = n;///vectorul v_n retinr cifrele impare din numar si vectorul v_k cele pare
    while(n){
        if((n % 10) % 2 == 0)   ///daca cifra este para o adaug la vectorul v_k 
            v_k[cnt_k++] = n % 10;
        else
            v_n[cnt_n++] = n % 10;    ///daca este impara o adaug la v_n
        n /= 10;
    }
    for(int i = cnt_k - 1; i > 0; i--)  ///parcurg vectorul v_k si verific daca are dubluri 
        for(int j = i - 1; j >= 0; j--)
            if(v_k[i] == v_k[j])  ///daca are, elimin dublurie, incepand cu a doua
                v_k[j] = -1;
    k = 0;
    for(int i = cnt_k - 1; i >= 0; i--)   ///creez k-ul, punand conditia ca valoarea de pe pozitia curenta sa fie diferita de -1
        if(v_k[i] != -1)
            k = k * 10 + v_k[i];
    n = 0;
    for(int i = cnt_n - 1; i >= 0; i--)   ///creez n-ul 
        n = n * 10 + v_n[i];

    if(cnt_k == 0){   ///daca cnt_k ramane la valoarea 0(adica nu sunt cifre pare in numar), lui n ii redau valoarea initiala si lui k ii atribui valoarea -1
        n = aux_n;
        k = -1;
    }       
}

int main()
{
    int n, k = -1;
    cin >> n;
    cifre(n, k);
    cout << n << " " << k;
    return 0;
}

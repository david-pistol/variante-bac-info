#include <iostream>
using namespace std;

void nPrime(int n, int &k, int p[])
{

      ///folosesc ciurul lui Eratostene, iar in v_nr_prime am toate numerele prime mai mici decat n

    int v_nr_prime[1005] = {1};
    for(int i = 2; i * i < n; i++)
        if(v_nr_prime[i] == 1)
            for(int j = 2; i * j < n; j++)
                v_nr_prime[i * j] = 0;
    for(int i = 1; i < n; i++)
        if(v_nr_prime[i] == 1){
            p[k] = i;
            k++;
        }
}

int main()
{
    int n, k = 1, p[1005] = {0};
    cin >> n;
    nPrime(n, k, p);
    for(int i = 1; i < k; i++)
        cout << p[i] << " ";
    return 0;
}

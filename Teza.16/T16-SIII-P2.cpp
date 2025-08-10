#include <iostream>
#include <cmath>
using namespace std;

void nMax(int &n, int c)
{
    int v[50], cnt = 0;
    while(n){   ///introduc cifrele nr in vector
        cnt++;
        v[cnt] = n % 10;
        n /= 10;
    }
    for(int i = 1; i <= cnt / 2; i++)   ///rastor valorile din vector ca sa ajung la ordinea originala
        swap(v[i], v[cnt - i + 1]);
    v[0] = c;   ///valoarea de pe poz 0 este chiar c pentru al putea compara cu restul nr din vector 
    for(int i = 0; i <= cnt; i++){    ///am observat ca numarul are valoarea lui maxima in momentul in care, 
        if(v[i] < v[i + 1])           ///mergand de la stanga la dreapta, gasim un nr mai mic decat c
            swap(v[i], v[i + 1]); 
        else
            break;    ///daca il gasim, atunci oprim cautarea
    }
    for(int i = 0; i <= cnt; i++){    ///construiesc n-ul inapoi
        n *= 10;
        n += v[i];
    }
}

int main()
{
    int n, c;
    cin >> n >> c;
    nMax(n, c);
    cout << n;
    return 0;
}

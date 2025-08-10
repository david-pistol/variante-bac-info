
///cred ca este gresit enuntul
///in loc sa-mi dea rezultatul 115 imi da 97, desi rezultatul corect este 97


#include <iostream>
using namespace std;

int numarare(int n, int m)
{
    int suma = 0, aux_i, cnt;

      ///parcurg interval si adun la suma nr de cifre pe care il are fiecare fiecare numar

    for(int i = n; i <= m; i++){
        aux_i = i;
        cnt = 0;
        while(aux_i){
            cnt++;
            aux_i /= 10;
        }
        suma += cnt;
    }
    return suma;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << numarare(n, m);
    return 0;
}

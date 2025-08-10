#include <iostream>
using namespace std;

int main()
{
    bool switch_ = true;
    int n, a[55][55], linia_cu_sume[55] = {0}, suma = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    cout << '\n';
      
      ///vectorul "linia_cu_sume" reprezinta suma tuturor elementelor de pe fiecare coloana

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            suma += a[j][i];
        }
        linia_cu_sume[i] = suma;
        suma = 0;
    }
     
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)    ///parcurg linia curenta si verific prin variabila swich daca linia are numai elemente de zero
            if(a[i][j] != 0){
                switch_ = false;
                break;
            }
        if(switch_ == true){  ///daca swich este true incep sa introduc elementele din vectorul "linia_cu_sume" in linia curenta
            for(int j = 0; j < n; j++)
                a[i][j] = linia_cu_sume[j];
        }
        switch_ = true;
    }
    
      ///afisez matricea

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}

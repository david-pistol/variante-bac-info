#include <iostream>
using namespace std;

int divizori(int n)
{
    int suma = 0;
    bool switch_ = false;
    for(int i = 2; i <= n / 2; i++){
        
        if(n % i == 0){   ///verific daca este divizor
            
            for(int j = 2; j <= i / 2; j++)
                if(i % j == 0){   ///verific daca divizorul este prim
                    switch_ = true;
                    break;
                }
                
            if(switch_ == false)    ///daca divizorul este prim il adaug la suma
                suma += i;
        }
        swich = false;
    }
    return suma;

}

int main()
{
    int n;
    cin >> n;
    cout << divizori(n);
    return 0;
}

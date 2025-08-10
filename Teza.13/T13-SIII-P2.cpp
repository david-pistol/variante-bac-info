#include <iostream>
#include <cmath>
using namespace std;

bool rotund(int n)
{
    bool switch_ = true;

      ///primul rest pe care il primesc prin impartirea lui n la 2 reprezinta
      ///prima cifra care apare in reprezentarea lui n in baza 2
      
    int rest = n % 2, prima_cifra = n % 2;  
    n /= 2;

      ///verific daca exista resturi care se repeta la impartirea consecutiva la 2 a lui n

    while(n){
        if(n % 2 == rest){
            switch_ = false;
            break;
        }
        rest = n % 2;
        n /= 2;
    }
    
      ///daca prima cifra este 0(adica reprezentarea in baza 2 este para)
      ///si nu exista resturi care se repeta, atunci nr este rotund

    if(prima_cifra == 0 && switch_ == true)  
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << rotund(n) << '\n';
    return 0;
}

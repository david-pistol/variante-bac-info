#include <iostream>
using namespace std;

int divizor(int n, int v[])
{
    int rez, divizor_curent_maxim;
    divizor_curent_maxim = v[1]; 
    for(int i = 2; i <= n; i++){
          int a = divizor_curent_maxim, b = v[i];
          while(b){///aflu cmmdc dintre primele doua numere
              int r = a % b;
              a = b;
              b = r;
          }
          divizor_curent_maxim = a; ///divizor_curent_maxim devine cmmdc si in contimuare se afla cmmdc dintre elementul curent din vector si cmmdc curent
          rez = a;
        }
    return rez;
    }

int main()
{
    int n, v[105];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    cout << divizor(n, v);
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

void numar(int n, int &m)
{
    m = 0;
    int cnt = 0, v_cif_imp[20] = {0};
  
      ///daca gasim o cifra impara in numar o punem in vectorul v_cif_imp
  
    while(n)
    {
        if((n % 10) % 2 != 0 || n % 10 == 1){
            cnt++;
            v_cif_imp[cnt] = n % 10;
            n /= 10;
        }
        else
            n /= 10;
    }
    
      ///daca cnt = 0 inseamna ca nu avem cifre impare in numar asa ca il facem pe m = -1

    if(cnt == 0)
        m = -1;
    else
    {
        
          ///sortam cifrele in ordine descrescatoare in vector
        
        for(int i = 1; i < cnt; i++)
            for(int j = i + 1; j <= cnt; j++)
                if(v_cif_imp[i] <= v_cif_imp[j])
                    swap(v_cif_imp[i], v_cif_imp[j]);
        
          ///creez m-ul

        for(int i = 1; i <= cnt; i++)
            m = m * 10 + v_cif_imp[i];
    }
}

int main()
{
    int n, m = 0;
    cin >> n;
    numar(n, m);
    cout << m << "\n";
    return 0;
}

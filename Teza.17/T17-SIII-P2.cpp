#include <iostream>
using namespace std;

int termen(int n)
{
    bool ok = true;
    int multip_3 = 3, y;
    while(x <= 100){    ///am pus 100 ca sa fiu sigur ca trece prin toate cele 100 de valori din sir
        for(int i = 1; i <= multip_3; i++){   ///merg cu i de la 1 pana la multiplul curent si scad din n cate 1
            if(ok == false)                   ///daca il gasesc, returnez y care memoreaza valoarea pozitiei 
                return y;
            n--;
            y = i;
            if(n == 0)
                ok = false;
          
        }
        for(int j = multip_3 - 1; j >= 2; j--){   ///merg de la multiplu - 1 pana la doi ca sa nu incurc primul for 
            if(ok == false)
                return y;
            n--;
            y = j;
            if(n == 0)
                ok = false;
        }
        multip_3 += 3;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << termen(n) << '\n';
    return 0;
}

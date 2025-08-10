///algoritmul este eficient din punct de vedere al timpului deoarece parcurge vectorul a o singura data

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac.txt");

int main()
{
    int n, m, a[10000], b[10000], vfr_b[10000], mini = 10000;
    
    fin >> n >> m;
    for(int i = 1; i <= n; i++)
        fin >> a[i];
    for(int j = 1; j <= m; j++)
        fin >> b[j];
    
    ///folosim un vector de frecventa pentru a vedea de cate ori se afla fiecare element din b in sirul a

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            if(a[i] == b[j])
                vfr_b[j]++;
    }
    
    ///afisam numarul cel mai mic din vectorul de frecventa deoarece cel main mic nr din vector reprezinta nr de subsiruri din a

    for(int i = 1; i <= m; i++)
        if(vfr_b[i] < mini)
            mini = vfr_b[i];

    cout << mini << "\n"; 
    return 0;
}

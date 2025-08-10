#include <iostream>
using namespace std;

int maxim(int n, int m, int T[][35])
{
    int nr_final = 0, prima_linie = -1;

    for(int i = 1; i <= n; i++)   ///caut prima linie cu prima valoare impara
        if(T[i][1] % 2 != 0){
            prima_linie = i;
            break;
        }
    if(prima_linie == -1)   ///daca variabila prima_linie ramane -1, inseamna ca nu am gasit nicio linie cu primul element impar
        return -1;          ///si returnez -1 
    
    for(int i = 1; i < m; i++)    ///modific prima linie in matrice, ordonand descrescator elementele 
        for(int j = i + 1; j <= m; j++)
            if(T[prima_linie][i] < T[prima_linie][j])
                swap(T[prima_linie][i], T[prima_linie][j]);

    for(int i = 1; i <= m; i++)   ///creez numarul final
        if(T[prima_linie][i] % 2 == 0)  ///daca cifra este para, atunci cifra o sa fie adaugata in nr final
            nr_final = nr_final * 10 + T[prima_linie][i];
    return nr_final;
}

int main()
{
    int n, m, T[35][35];
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> T[i][j];
    cout << maxim(n, m, T) << '\n';
    return 0;
}

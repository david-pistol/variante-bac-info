#include <iostream>
using namespace std;

int main()
{
    int n, m[55][55];
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> m[i][j];

    for(int i = 1; i <= n; i++){
        for(int j = (n / 2) + 1; j < n; j++)
            m[i][j] = m[i][j + 1];
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = (n / 2) + 1; j < n; j++)
            m[j][i] = m[j + 1][i];
    }
    cout << endl;
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++)
            cout << m[i][j] << " ";
        cout << "\n";
    }
    return 0;
}

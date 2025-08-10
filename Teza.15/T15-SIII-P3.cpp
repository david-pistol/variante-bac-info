#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T15.txt");

int main()
{
    int n, m, cnt = 0, cnt2 = 0, nr_elemente_max_V = -1, cnt_secvente_max = 0;
    fin >> n;
    while(fin >> m){
        if(n > m){
            if(cnt2 != 0){
                cnt = 0;
                cnt2 = 0;
            }
            cnt++;
        }
        else if(n < m){
            cnt2++;
            if(cnt == cnt2){
                if(nr_elemente_max_V == cnt2 * 2 + 1)
                    cnt_secvente_max++;
                else if(nr_elemente_max_V < cnt2 * 2 + 1){
                    nr_elemente_max_V = cnt2 * 2 + 1;
                    cnt_secvente_max = 1;
                }
            }
            if(cnt > cnt2){
                if(nr_elemente_max_V == cnt2 * 2 + 1)
                    cnt_secvente_max++;
                else if(nr_elemente_max_V < cnt2 * 2 + 1){
                    nr_elemente_max_V = cnt2 * 2 + 1;
                    cnt_secvente_max = 1;
                }
            }
        }
        n = m;
    }
    cout << nr_elemente_max_V << " " << cnt_secvente_max << '\n'; 
    return 0;
}

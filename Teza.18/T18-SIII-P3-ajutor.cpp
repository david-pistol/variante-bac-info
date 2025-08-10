#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin ("bac-T18.txt");

int main()
{
    int n, v_fr_cif[10] = {0};
    while(fin >> n){
        while(n){
            v_fr_cif[n % 10]++;
            n /= 10;
        }
    }
    
    

    return 0;
}

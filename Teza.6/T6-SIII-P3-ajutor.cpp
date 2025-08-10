
///nu stiu ce sa fac cand p este par

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac-T6.txt");

int main()
{
    int p, s;
    fin >> p;
    if(p % 2 != 0){
        while(fin >> s){
            if(s % p != 0)
              cout << "NU" << " ";
            else {
              cout << (s / p) - (p / 2) << " ";
            }
        }
    }
    //else{
        //while(fin >> s){
            
        //}
    return 0;
}

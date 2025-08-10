#include <iostream>
using namespace std;

int main()
{
    char s[105];
    int maxi = 0;
    int v_fr[50] = {0};
    cin.getline(s, 105);
        
      ///transform literele mari in litere mici si daca s[i] este litera il transform in codul ASCII si scad 97 din acesta pt a putea sa-l nr in vectorul de frecventa
      
    for(int i = 0; i < strlen(s); i++)
    {
        s[i] = tolower(s[i]);
        if(isalpha(s[i]) == true){
            v_fr[(int)s[i] - 97]++;
        }
    }
    
      ///aflu nr de aparitii cel mai mare din vectorul de frecventa

    for(int i = 0; i <= 30; i++)
        if(maxi < v_fr[i])
            maxi = v_fr[i];

      ///in momentul cand ajung in dreptul numarului maxim afisez litera corespunzatoare si nr maxim in dreptul ei

    for(int i = 0; i <= 30; i++)
        if(v_fr[i] == maxi)
            cout << (char)(i + 97) << " " << maxi << "\n";

    return 0;
}

#include <iostream>
using namespace std;

int prod(int n, int x[])
{
    int cm_mare_nr = -1, cm_mare_nr2 = -1, cm_mic_nr = 1, cm_mic_nr2 = 1;
    for(int i = 1; i <= n; i++){
        if(x[i] > cm_mare_nr){    ///daca gasesc cel mai mare numar, al doilea cel mai mare o sa fie cel mai mare anterior
            cm_mare_nr2 = cm_mare_nr;
            cm_mare_nr = x[i];
        }
        else if(x[i] < cm_mic_nr){    ///la fel si pentru cel mai mic 
            cm_mic_nr2 = cm_mic_nr;
            cm_mic_nr = x[i];
        }
        else if(x[i] > cm_mare_nr2)   ///daca nr nu este destul de mare ca sa fie mai mare decat cel mai mare, 
            cm_mare_nr2 = x[i];       ///dar este destul de mare incat sa fie mai mare decat al doilea cel mai mare
                                      ///atunci il inlocuiesc numai pe al doilea cel mai mare
        else if(x[i] < cm_mic_nr2)    ///la fe si pentru al doilea cel mai mic
            cm_mic_nr2 = x[i];
    }
    if(cm_mic_nr * cm_mic_nr2 < cm_mare_nr * cm_mare_nr2)
        return cm_mare_nr * cm_mare_nr2;
    else
        return cm_mic_nr * cm_mic_nr2;
}

int main()
{
    int n, x[100];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> x[i];
    cout << prod(n, x);
    return 0;
}

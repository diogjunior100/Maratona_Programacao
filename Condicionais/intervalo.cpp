#include <iostream>
 
using namespace std;
 
int main()
{
    float numero;

    cin >> numero;

    if(numero < 0 || numero > 100)
    {
        cout << "Fora de intervalo" << endl;
    }
    else
    {
        if(numero >= 0 && numero <= 25)
        {
            cout << "Intervalo [0,25]" << "\n";
        }
        else if(numero > 25 && numero <= 50)
        {
            cout << "Intervalo (25,50]" << "\n";
        }
        else if(numero > 50 && numero <= 75)
        {
            cout << "Intervalo (50,75]" << "\n";
        }
        else
        {
            cout << "Intervalo (75,100]" << "\n";
        }
    }

    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() {
    
    float valor;
    int resultado;
    
    cin >> valor;

    //NOTAS
    cout << "NOTAS:" << endl;
    
    //notas 100
    resultado = (int)valor/100;
    cout << resultado << " nota(s) de R$ 100.00" << endl;
    valor = valor - (resultado*100);

    //notas de 50
    resultado = (int)valor/50;
    cout << resultado << " nota(s) de R$ 50.00" << endl;
    valor = valor - (resultado*50);

    //notas de 20 
    resultado = (int)valor/20;
    cout << resultado << " nota(s) de RS 20.00" << endl;
    valor = valor - (resultado*20);

    //notas de 10
    resultado = (int)valor/10;
    cout << resultado << " nota(s) de RS 10.00" << endl;
    valor = valor - (resultado*10);

    //notas de 5
    resultado = (int)valor/5;
    cout << resultado << " nota(s) de RS 5.00" << endl;
    valor = valor - (resultado*5);

    //notas de 2
    resultado = (int)valor/2;
    cout << resultado << " nota(s) de RS 2.00" << endl;
    valor = valor - (resultado*2);

    cout << "MOEDAS:" << endl;

    resultado = (int)valor/1;
    cout << resultado <<  " moeda(s) de R$ 1" < endl;
    valor = (valor - (resultado*1)) * 100;

    resultado = (int)valor/50;
    printf("%d Moedas de R$ 0,50 \n", resultado);
    
    valor = valor - (resultado*50);

    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() {
 
    float valor, op, imposto;
    
    cin >> valor;

    if (valor >= 0.00 && valor <= 2000.00)
    {
        cout << "Isento" << "\n";
    }

    else if(valor >= 2000.01 && valor <= 3000.00){
        op = valor - 2000.00;
        imposto = op*0.08;

        printf("R$ %.2f\n", imposto);
    }

    else if(valor >= 3000.01 && valor <= 4500.00){
        op = (valor - 3000.00) * 0.18;
        imposto = (1000.00*0.08) + op;

        printf("R$ %.2f\n", imposto);
    }

    else{
        op = (valor - 4500.00) * 0.28;
        imposto = (1000.00*0.08) + (1500.00*0.18) + op;

        printf("R$ %.2f\n", imposto);
    }
    
    
 
    return 0;
}
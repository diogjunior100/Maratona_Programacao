#include <iostream>
 
using namespace std;

 
int main() {
 
    int testes, numero, soma = 0;
    
    cin >> testes;
    cin >> numero;

    for(int i = 0; i<testes; i++){
        for(int j = 1; j<= numero; j++){
            if(numero%j == 0){
                soma = soma + 1;
            }
        }
        if(soma == 2){
            cout << numero << " eh primo" << endl;
        }
        else{
            cout << numero << " nao eh primo" << endl;
        }
        soma = 0;
        //scanf("%d", &numero);
        cin >> numero;
    }
     
    return 0;
}
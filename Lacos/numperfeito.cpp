#include <iostream>
 
using namespace std;
 
int main() {
 
    int testes, numero, soma = 0;
    
    cin >> testes;
    cin >> numero;

    for (int i = 0; i<testes; i++){
        for(int j = 1; j < numero; j++){
            if(numero%j == 0){
                soma = soma + j;
            }
        }
        if(soma == numero){
            //printf("%d eh perfeito\n", numero);
            cout << numero << " eh perfeito" << endl;
        }
        else{
            //printf("%d nao eh perfeito\n", numero);
            cout << numero << " nao eh perfeito" << endl;
        }
        soma = 0;
        //scanf("%d", &numero);
        cin >> numero;
    }
 
    return 0;
}
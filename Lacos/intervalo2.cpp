#include <iostream>
 
using namespace std;
 
int main() {
 
    int testes;
    int valor, somain = 0, somaout = 0;
    
    cin >> testes;
    
    for(int i = 0; i<testes;i++){
        cin >> valor;

        if(valor >= 10 && valor <=20){
            somain = somain + 1;
        }
        else{
            somaout = somaout + 1;
        }
    }
    
    //printf("%d in\n", somain);
    cout << somain << " in" << endl;
    //printf("%d out\n", somaout);
    cout << somaout << " out" << endl;
 
    return 0;
}
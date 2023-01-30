#include <iostream>
 
using namespace std;
 
int main() {
 
    int valorsegundos;
    int horas, minutos, segundos;
    
    //scanf("%d", &valorsegundos);
    cin >> valorsegundos;
    
    horas = valorsegundos/3600;
    
    minutos = (valorsegundos%3600)/60;
    
    segundos = valorsegundos%60;
    
    //printf("%d:%d:%d\n", horas,minutos,segundos);   

    cout << horas << ":" << minutos << ":" << segundos << endl; 
    
 
    return 0;
}
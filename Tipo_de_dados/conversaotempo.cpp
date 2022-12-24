#include <iostream>
 
using namespace std;
 
int main() {
 
    int valorsegundos;
    int horas, minutos, segundos;
    
    scanf("%d", &valorsegundos);
    
    horas = valorsegundos/3600;
    
    minutos = (valorsegundos%3600)/60;
    
    segundos = valorsegundos%60;
    
    printf("%d:%d:%d\n", horas,minutos,segundos);
    
 
    return 0;
}
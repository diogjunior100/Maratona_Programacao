#include <iostream>
 
using namespace std;
 
int main() {
 
    int horas, velocidade;
    double mult, litros;
    
    scanf("%d %d", &horas, &velocidade);
    
    mult = horas*velocidade;
    
    litros = mult/12;
    
    printf("%.3lf\n", litros);
 
    return 0;
}
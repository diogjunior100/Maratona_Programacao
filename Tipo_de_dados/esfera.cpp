#include <iostream>
 
using namespace std;
 
int main() {
 
    double raio,volume;
    double n = 3.14159;
    
    scanf("%lf", &raio);
    
    volume = (4*n*(raio*raio*raio))/3;
    
    printf("VOLUME = %.3lf\n", volume);
    
 
    return 0;
}
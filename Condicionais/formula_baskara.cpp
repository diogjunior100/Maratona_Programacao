#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double a,b,c;
    double r1, r2, delta;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    delta = (b*b)-(4*a*c);
    
    if(a == 0 || delta < 0){
        printf("Impossivel calcular\n");
    }
    else{
    r1 = ((-b)+sqrt(delta))/(2*a);
    r2 = ((-b)-sqrt(delta))/(2*a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
    }
   
 
    return 0;
}
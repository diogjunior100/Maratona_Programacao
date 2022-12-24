#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double x1,y1,x2,y2;
    double distancia, valorfinal;
    
    scanf("%lf %lf", &x1,&y1);
    scanf("%lf %lf", &x2,&y2);
    
    
    distancia = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    valorfinal = sqrt(distancia);
    
    printf("%.4f\n", valorfinal);
    return 0;
}
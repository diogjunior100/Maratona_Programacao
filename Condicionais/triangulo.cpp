#include <iostream>
 
using namespace std;
 
int main() {
 
    double a,b,c;
    
    cin >> a;
    cin >> b;
    cin >> c;

    if(a < (b+c) && b < (a+c) && c < (a+b)){
        //float perimetro = ((a+b)*c)/2;
        float perimetro = a+b+c;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else{
        float area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }
    return 0;
}
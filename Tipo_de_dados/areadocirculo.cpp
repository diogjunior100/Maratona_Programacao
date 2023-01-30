#include <iostream>

using namespace std;

int main(){
    double raio, area;
    double n = 3.14159;
    
    //scanf("%lf", &raio);
    cin >> raio;
    
    area = n*(raio*raio);
    
    printf("A=%.4lf\n", area);
    
    
    return 0;
}
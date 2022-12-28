#include <iostream>
 
using namespace std;
 
int main() {
 
    int num1, num2, num3, cont1, cont2, cont3, comparador;

    cin >> num1; 
    cin >> num2; 
    cin >> num3;

    cont1 = num1;
    cont2 = num2;
    cont3 = num3;

    if (cont1 < cont2){
        comparador = cont1;
        cont1 = cont2;
        cont2 = comparador;
    }

    if (cont2 < cont3){
        comparador = cont2;
        cont2 = cont3;
        cont3 = comparador;
    }

    if (cont1 < cont2){
        comparador = cont1;
        cont1 = cont2;
        cont2 = comparador;
    }

    printf("%d\n%d\n%d\n", cont3, cont2, cont1);
    printf("\n");
    printf("%d\n%d\n%d\n", num1, num2, num3);
    
 
    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() {
    int codigo, preco, qtd;
    double conta;
    
    scanf("%d %d", &codigo, &qtd);
    
    if(codigo == 1){
        conta = 4*qtd;
    }
    else if(codigo == 2){
        conta = 4.5*qtd;
    }
    else if(codigo == 3){
        conta = 5*qtd;
    }
    else if(codigo == 4){
        conta = 2*qtd;
    }
    else {
        conta = 1.5*qtd;
    }
    
    printf("Total: R$ %.2lf\n", conta);
 
    return 0;
}
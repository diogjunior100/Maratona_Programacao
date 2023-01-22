#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float idade = 1, media;
    float count = 0, soma = 0;
    
    cin >> idade;
    
    while(idade > 0){
        count = count + 1;
        soma = soma + idade;
        cin >> idade;
    }
    
    media = soma/count;
    
    printf("%.2f\n", media);
    
    return 0;
}
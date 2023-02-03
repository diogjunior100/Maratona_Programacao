#include <iostream>
 
using namespace std;
 
int main() {
 
    int tamanho, vetor[1001], menor = 0, posicao;
    //scanf("%d", &tamanho);

    cin >> tamanho;
    
    for(int i = 0; i< tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    
    menor = vetor[0];
    
    for(int j = 0; j<tamanho;j++){
        if(vetor[j]<menor){
            menor = vetor[j];
            posicao = j;
        }
    }
 
    //printf("Menor valor: %d\n", menor);
    cout << "Menor valor: " << menor << endl;
    //printf("Posicao: %d\n", posicao);
    cout << "Posicao: " << posicao << endl;
    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() {
 
    int tomadas[5], soma = 0;
    
    for(int i = 0; i<4; i++){
        //scanf("%d", &tomadas[i]);
        cin >> tomadas[i];
    }
    
    for(int j = 0; j<4; j++){
        //printf("%d\n", soma);
        soma = soma + (tomadas[j]);
    }
    
    //printf("%d\n", soma-3);
    cout << soma-3 << endl;
 
    return 0;
}
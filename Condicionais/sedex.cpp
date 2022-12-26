#include <iostream>
 
using namespace std;
 
int main() {
 
    int d, altura, largura, profundidade;
    
    scanf("%d", &d);
    scanf("%d %d %d", &altura, &largura, &profundidade);
    
    if(d<=largura && d<= altura && d<=profundidade){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
 
    return 0;
}
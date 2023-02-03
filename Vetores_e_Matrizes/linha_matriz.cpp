#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double M[12][12], soma = 0, media = 0;
    int x,y,linha;
    char op[2];
 
    cin >> linha;
    cin >> op;
    
    for(int x = 0; x <12; x++){
        for(int y = 0; y<12;y++){
            cin >> M[x][y];
            //soma da linha
            if(x == linha){
                soma = soma + M[x][y];
            }
        }
    }
    
    if(op[0] == 'S'){
        //printf("%.1lf\n", soma);
        std::cout << std::fixed << std::setprecision(1) << soma << std::endl;
    }
    else{
        media = soma/12;
        //printf("%.1lf\n", media);
        std::cout << std::fixed << std::setprecision(1) << media << std::endl;
    }
    
    
    return 0;
}
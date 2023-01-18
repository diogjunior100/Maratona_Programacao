#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,Y, soma = 0;
    //scanf("%d", &X);
    cin >> X;
    cin >> Y;
    //scanf("%d", &Y);
    
    if(X < Y)
    {
        for(int i = X; i<=Y; i++)
        {
            if(i%13 != 0)
            {
                soma = soma + i;
            }
        }
        //printf("%d\n", soma);
    }
    //printf("%d\n", soma)
    else if(X>Y)
    {
        for(int i = Y; i<=X; i++)
        {
            if(i%13 != 0)
            {
                soma = soma + i;
            }
        }
    }
    
    //printf("%d\n", soma);
    cout << soma << endl;
 
    return 0;
}
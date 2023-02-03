#include <iostream>
 
using namespace std;
 
int fibonacci(int n){
    
    if (n == 0)
    {
        return 0;
    }
    

    if(n == 1 || n == 2){
        return 1;
    }


    n = fibonacci(n-1) + fibonacci(n-2);
    return n;

}

int main() {
    
    int testes;
    int n;
    int vetor[1001];

    cin >> testes;

    for (int i = 0; i < testes; i++)
    {
        cin >> n;
        
        cout << "Fib(" << n << ")" << " = " << fibonacci(n) << endl;
        
    }

    
    
    return 0;
}
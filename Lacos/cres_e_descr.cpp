#include <iostream>
 
using namespace std;
 
int main() {
    int X,Y;
        
    while(cin >> X >> Y){
        if(X > Y){
            cout << "Descrescente" << endl;
        }
        else if(X < Y){
            cout << "Crescente" << endl;
        }
        else{
            break;
        }
    }
 
    return 0;
}
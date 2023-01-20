#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x,y, a = 0, b = 1, c = 0;
    cin >> x;

    for(y = 1; y < x; y++){
        if (y%2 == 1)
        {
            //printf("%d ", c);
            cout << c << " ";
            c = a + b; 
            a = c;
        }

        else if (y == 2)
        {
            //printf("%d", c);
            cout << c << " ";
            //cout << c << endl;
        }

        else if(y%2==0)
        {
            //printf("%d ",c);
            //cout << c << endl;
            cout << c << " ";
            c=a+b;
            b=c;
        }
        
    }

    cout << c << endl;
    return 0;
}

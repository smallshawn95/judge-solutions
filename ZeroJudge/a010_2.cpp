#include <iostream>
using namespace std;

int main()
{
    int a, b = 2, n = 0;
    cin >> a;
    while(a != 1){
        n = 0;
        while(a % b == 0){
            if(n == 0){
                cout << b;
            }
            a /= b;
            n += 1;
        }
        if(n > 1){
            cout << "^" << n;
        }
        if(a != 1 && n != 0){
            cout << " * ";
        }
        b += 1;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    while(cin >> a >> b >> n){
        cout << a / b << '.';
        a %= b;
        for(int i = 0; i < n; i++){
            a *= 10;
            cout << a / b;
            a %= b;
        }
        cout << '\n';
    }
    return 0;
}

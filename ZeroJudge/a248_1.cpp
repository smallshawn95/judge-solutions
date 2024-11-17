#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    while(cin >> a >> b >> n){
        int num[10000];
        cout << a / b << '.';
        a %= b;
        for(int i = 0; i < n; i++){
            a *= 10;
            num[i] = a / b;
            a %= b;
        }
        for(int i = 0; i < n; i++){
            cout << num[i];
        }
        cout << '\n';
    }
    return 0;
}

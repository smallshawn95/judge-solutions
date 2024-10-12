#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
        long long x, y = 1;
        cin >> x;
        if(x == 0){
            y = 0;
        }
        while(x > 0){
            y *= x % 10;
            x /= 10;
        }
        cout << y << '\n';
    }
    return 0;
}

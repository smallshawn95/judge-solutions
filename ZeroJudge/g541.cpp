#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, q, x;
    cin >> n >> m >> q;
    int gcd = __gcd(n, m);
    while(q--){
        cin >> x;
        if(x % gcd == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}

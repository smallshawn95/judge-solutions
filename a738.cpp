#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, ans;
    while (cin >> a >> b){
        ans = __gcd(a, b);
        cout << ans << '\n';
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int a, b, x = 0, y = 0;
        cin >> a >> b;
        while(a > 0){
            x *= 10;
            x += a % 10;
            a /= 10;
        }
        while(b > 0){
            y *= 10;
            y += b % 10;
            b /= 10;
        }
        int ans = 0, sum = x + y;
        while(sum > 0){
            ans *= 10;
            ans += sum % 10;
            sum /= 10;
        }
        cout << ans << '\n';
    }
    return 0;
}
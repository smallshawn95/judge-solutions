#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x;
    while(cin >> x){
        long long ans = 0, i = 2;
        while(x != 1){
            if(x % i == 0){
                x /= i;
                ans += i;
            }else if(i >= sqrt(x)){
                ans += x;
                break;
            }else{
                i += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

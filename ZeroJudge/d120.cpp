#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n != 0){
        int ans = 0, i = 2;
        cout << n << " : ";
        while(n != 1){
            bool one = 0;
            while(n % i == 0){
                n /= i;
                if(!one){
                    ans += 1;
                    one = 1;
                }
            }
            i += 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
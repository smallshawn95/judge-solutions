#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        long long int ans = 0, x = 0, y = 1;
        for(int i = 1; i <= n; i++){
            ans = x + y;
            x = y;
            y = ans;
        }
        cout << ans << '\n';
    }
    return 0;
}
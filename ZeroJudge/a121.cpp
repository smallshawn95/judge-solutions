#include <iostream>
using namespace std;

bool is_prime(int x)
{
    if(x == 0 || x == 1){
        return false;
    }
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while(cin >> a >> b){
        int ans = 0;
        for(int i = a; i <= b; i++){
            if(is_prime(i)){
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

long long mod(long long num)
{
    if(num == 0){
        return 1;
    }else if(num == 1){
        return 2;
    }else if(num % 2 == 0){
        long long x = mod(num / 2);
        return (x * x) % MOD;
    }else{
        return (mod(num - 1) * mod(1)) % MOD;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        long long l;
        cin >> l;
        cout << mod(l - 1) << '\n';
    }
}
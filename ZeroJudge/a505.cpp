#include <iostream>
#include <cmath>
using namespace std;

#define N 10000001
bool is_prime[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(long long i = 2; i < N; i++){
        if(!is_prime[i]){
            for(long long j = i * i; j < N; j += i){
                is_prime[j] = 1;
            }
        }
    }
    long long n, x;
    cin >> n;
    while(n--){
        cin >> x;
        long long y = sqrt(x);
        if(!is_prime[y] && y * y == x && y > 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}

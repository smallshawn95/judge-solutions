#include <iostream>
using namespace std;

#define N 1000001
bool is_prime[N] = {1, 1};
bool is_digit_prime[N] = {1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(long long i = 2; i < N; i++){
        if(!is_prime[i]){
            for(long long j = i * i; j < N; j += i){
                is_prime[j] = 1;
                is_digit_prime[j] = 1;
            }
            int sum = 0, temp = i;
            while(temp > 0){
                sum += temp % 10;
                temp /= 10;
            }
            if(is_prime[sum]){
                is_digit_prime[i] = 1;
            }
        }
    }
    int n;
    cin >> n;
    while(n--){
        int a, b, ans = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            if(!is_digit_prime[i]){
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime[2000001] = {true, true};

int main()
{
    for(long long i = 2; i < 2000001; i++){
        if(!is_prime[i]){
            for(long long j = i * i; j < 2000001; j += i){
                is_prime[j] = true;
            }
        }
    }
    long long n;
    cin >> n;
    for(long long i = n + 1; i < 2000001; i++){
        if(!is_prime[i]){
            cout << i << ' ';
            break;
        }
    }
    long long x = sqrt(n) + 1, y = cbrt(n) + 1;
    cout << x * x << ' ' << y * y * y << '\n';
    return 0;
}

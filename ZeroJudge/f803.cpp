#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, n, m;
    cin >> n >> m;
    vector<int> primes;
    vector<bool> is_prime(n, 0);
    for(long long i = 2; i < n; i++){
        if(!is_prime[i]){
            primes.push_back(i);
            for(long long j = i * i; j < n; j += i){
                is_prime[j] = 1;
            }
        }
    }
    int len = primes.size();
    while(m--){
        cin >> x;
        for(int i = 0; i < len; i++){
            if(x == primes[i]){
                cout << i + 1 << '\n';
            }
        }
    }
    return 0;
}

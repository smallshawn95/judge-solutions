#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> primes;
    for(int i = 1; i < 1001; i++){
        bool is_prime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                is_prime = false;
            }
        }
        if(is_prime){
            primes.push_back(i);
        }
    }
    int n, c;
    while(cin >> n >> c){
        cout << n << ' ' << c << ':';
        int k = 0;
        for(int i: primes){
            if(i > n){
                break;
            }
            k += 1;
        }
        if(2 * c >= k || 2 * c - 1 >= k){
            for(int i = 0; i < k; i++){
                cout << ' ' << primes[i];
            }
        }else if(k % 2 == 1){
            for(int i = k / 2 - (c - 1); i < k / 2 + c; i++){
                cout << ' ' << primes[i];
            }
        }else{
            for(int i = k / 2 - c; i < k / 2 + c; i++){
                cout << ' ' << primes[i];
            }
        }
        cout << "\n\n";
    }
    return 0;
}

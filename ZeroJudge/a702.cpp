#include <iostream>
#include <vector>
using namespace std;

#define N 20000001
bool is_prime[N] = {1, 1};
vector<pair<int, int>> twin_prime;

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
    for(int i = 2; i < N - 4; i++){
        if(!is_prime[i] && !is_prime[i + 4]){
            twin_prime.push_back({i, i + 4});
        }
    }
    int s;
    while(cin >> s){
        cout << "(" << twin_prime[s - 1].first << ", " << twin_prime[s - 1].second << ")\n";
    }
    return 0;
}

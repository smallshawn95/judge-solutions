#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_prime(long long n)
{
    if(n == 0 || n == 1){
        return false;
    }
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string num;
    while(cin >> num){
        vector<long long> ans;
        int k = 0;
        string x;
        while(k < 10){
            x += num[k];
            long long a = stoll(x);
            if(is_prime(a)){
                ans.push_back(a);
                x.clear();
            }
            k += 1;
        }
        cout << ans.size() << '\n';
        for(long long i: ans){
            cout << i << '\n';
        }
        cout << '\n';
    }
    return 0;
}

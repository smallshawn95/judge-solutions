#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool is_prime[40001] = {1, 1};
    for(long long i = 2; i < 40001; i++){
        if(!is_prime[i]){
            for(long long j = i * i; j < 40001; j += i){
                is_prime[j] = 1;
            }
        }
    }
    string str;
    while(getline(cin, str)){
        if(str == "0"){
            break;
        }
        bool x = false;
        int a, num, sum = 1;
        stringstream ss(str);
        while(ss >> num){
            if(!x){
                a = num;
                x = true;
            }else{
                for(int i = 0; i < num; i++){
                    sum *= a;
                }
                x = false;
            }
        }
        sum -= 1;
        int k = 2;
        map<int, int, greater<int>> ans;
        while(sum > 1){
            if(!is_prime[k] && sum % k == 0){
                while(sum % k == 0){
                    ans[k]++;
                    sum /= k;
                }
            }
            k++;
        }
        for(pair<int, int> i: ans){
            cout << i.first << ' ' << i.second << ' ';
        }
        cout << '\n';
    }
    return 0;
}

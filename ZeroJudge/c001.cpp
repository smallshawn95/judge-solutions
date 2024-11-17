#include <iostream>
#include <cstring>
using namespace std;

int dp[1001], temp[1001];

int main()
{
    string a, b;
    while(cin >> a >> b){
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < a.length(); i++){
            temp[0] = 0;
            for(int j = 0; j < b.length(); j++){
                if(a[i] == b[j]){
                    temp[j + 1] = dp[j] + 1;
                }else{
                    temp[j + 1] = max(temp[j], dp[j + 1]);
                }
            }
            memcpy(dp, temp, sizeof(dp));
        }
        cout << dp[b.length()] << '\n';
    }
    return 0;
}
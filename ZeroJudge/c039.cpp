#include <iostream>
#include <map>
using namespace std;

map<int, int> dp;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, j;
    while(cin >> i >> j){
        int x = i, y = j;
        if(x > y){
            swap(x, y);
        }
        int ans = 0;
        for(int k = x; k <= y; k++){
            int temp = k, circle = 0;
            while(true){
                if(temp == 1){
                    circle += 1;
                    dp[k] = circle;
                    if(circle > ans){
                        ans = circle;
                    }
                    break;
                }
                if(dp[temp] != 0){
                    if(circle + dp[temp] > ans){
                        ans = circle + dp[temp];
                    }
                    break;
                }
                if(temp % 2 == 1){
                    temp = 3 * temp + 1;
                }else{
                    temp /= 2;
                }
                circle += 1;
            }
        }
        cout << i << ' ' << j << ' ' << ans << '\n';
    }
    return 0;
}
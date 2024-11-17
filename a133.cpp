#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x = 1, n1, n2;
    while(cin >> n1 >> n2){
        if(n1 == 0 && n2 == 0){
            break;
        }
        vector<int> a(n1 + 1, 0), b(n2 + 1, 0);
        for(int i = 1; i <= n1; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n2; i++){
            cin >> b[i];
        }
        vector<int> dp(n2 + 1, 0);
        for(int i = 1; i <= n1; i++){
            vector<int> temp(n2 + 1, 0);
            for(int j = 1; j <= n2; j++){
                if(a[i] != b[j]){
                    temp[j] = max(temp[j - 1], dp[j]);
                }else{
                    temp[j] = dp[j - 1] + 1;
                }
            }
            dp = temp;
        }
        cout << "Twin Towers #" << x << '\n';
        cout << "Number of Tiles : " << dp[n2] << "\n\n";
        x += 1;
    }
    return 0;
}
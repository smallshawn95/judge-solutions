#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, f;
    long long num[3];
    while(cin >> n){
        for(int i = 1; i <= n; i++){
            long long ans = 0;
            cin >> f;
            for(int j = 1; j <= f; j++){
                for(int k = 0; k < 3; k++){
                    cin >> num[k];
                }
                ans = ans + num[0] * num[2];
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        int ans = 0, num[n];
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - 1; j++){
                if(num[j] > num[j + 1]){
                    ans += 1;
                    swap(num[j], num[j + 1]);
                }
            }
        }
        cout << "Minimum exchange operations : " << ans << '\n';
    }
    return 0;
}
#include <iostream>
using namespace std;

long long num[200005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    long long ans = 0;
    for(int i = 1; i < n; i++){
        if(num[i] < num[i - 1]){
            ans += num[i - 1] - num[i];
            num[i] = num[i - 1];
        }
    }
    cout << ans << '\n';
    return 0;
}

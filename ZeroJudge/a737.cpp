#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int r, num[501];
        cin >> r;
        for(int i = 0; i < r; i++){
            cin >> num[i];
        }
        sort(num, num + r);
        int mid, ans = 0;
        if(r % 2){
            mid = num[r / 2];
        }else{
            mid = (num[r / 2] + num[r / 2 - 1]) / 2;
        }
        for(int i = 0; i < r; i++){
            ans += abs(num[i] - mid);
        }
        cout << ans << '\n';
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n && n != 0){
        int sum = 0, ans = 0, num;
        for(int i = 0; i < n; i++){
            cin >> num;
            sum += num;
            if(sum > ans){
                ans = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        if(ans == 0){
            cout << "Losing streak.\n";
        }else{
            cout << "The maximum winning streak is " << ans << ".\n";
        }
    }
    return 0;
}
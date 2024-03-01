#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        bool three[3] = {false, false, false};
        int n, num, sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> num;
            three[num % 3] = true;
            sum += num;
        }
        sum %= 3;
        if(sum == 0){
            cout << 0 << '\n';
        }else if(sum == 2 || three[sum]){
            cout << 1 << '\n';
        }else{
            cout << 2 << '\n';
        }
    }
    return 0;
}

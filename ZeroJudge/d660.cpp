#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        int n, num, x, high = 0, low = 0;
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> num;
            if(j == 0){
                x = num;
                continue;
            }
            if(num > x){
                high += 1;
            }else if(num < x){
                low += 1;
            }
            x = num;
        }
        cout << high << ' ' << low << '\n';
    }
    return 0;
}
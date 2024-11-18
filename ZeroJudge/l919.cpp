#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    int max_profit = 0, buy_day = -1, sale_day = -1;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(num[j] - num[i] > max_profit){
                max_profit = num[j] - num[i];
                buy_day = i;
                sale_day = j;
            }
        }
    }
    if(buy_day == -1){
        cout << -1 << '\n';
    }else{
        cout << buy_day + 1 << ' ' << sale_day + 1 << '\n';
    }
    return 0;
}

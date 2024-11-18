#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, hr, min, times;
    pair<int, int> ans[20];
    cin >> n;
    cin >> hr >> min;
    for(int i = 0; i < n; i++){
        cin >> times;
        min += times;
        if(min > 60){
            hr += min / 60;
            min %= 60;
        }
        if(hr >= 24){
            hr -= 24;
        }
        ans[i].first = hr;
        ans[i].second = min;
    }
    int key;
    while(cin >> key && key != 0){
        cout << setw(2) << setfill('0') << ans[key - 1].first << ':';
        cout << setw(2) << setfill('0') << ans[key - 1].second << '\n';
    }
    return 0;
}
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int num[1000005], min_ans[1000005], max_ans[1000005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    while(cin >> n >> k){
        k = min(n, k);
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        int x = 0, y = 0;
        multiset<int> window;
        for(int i = 0; i < k; i++){
            window.insert(num[i]);
        }
        min_ans[x++] = *window.begin();
        max_ans[y++] = *window.rbegin();
        for(int i = k; i < n; i++){
            window.erase(window.find(num[i - k]));
            window.insert(num[i]);
            min_ans[x++] = *window.begin();
            max_ans[y++] = *window.rbegin();
        }
        for(int i = 0; i < x; i++){
            if(i == 0){
                cout << min_ans[i];
            }else{
                cout << ' ' << min_ans[i];
            }
        }
        cout << '\n';
        for(int i = 0; i < y; i++){
            if(i == 0){
                cout << max_ans[i];
            }else{
                cout << ' ' << max_ans[i];
            }
        }
        cout << '\n';
    }
    return 0;
}

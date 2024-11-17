#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> stone;
    int n, q, num, times = 1;
    while(cin >> n >> q && n != 0){
        for(int i = 0; i < n; i++){
            cin >> num;
            stone.push_back(num);
        }
        sort(stone.begin(), stone.end());
        cout << "CASE# " << times++ << ":\n";
        int key, ans;
        for(int i = 0; i < q; i++){
            cin >> key;
            ans = lower_bound(stone.begin(), stone.end(), key) - stone.begin();
            if(stone[ans] == key){
                cout << key << " found at " << ans + 1 << '\n';
            }else{
                cout << key << " not found\n";
            }
        }
        stone.clear();
    }
    return 0;
}
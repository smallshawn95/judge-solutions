#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i = 1;
    while(cin >> n){
        cout << "Case " << i++ << ":\n";
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        }
        int same = 0;
        vector<pair<int, int>> ans;
        for(int i = 0; i < n; i++){
            bool yes = true;
            pair<int, int> x = v[i];
            for(int j = 0; j < n; j++){
                if(i == j){
                    continue;
                }
                if(x.first == v[j].first && x.second == v[j].second){
                    same++;
                    yes = false;
                    break;
                }
                if(x.first <= v[j].first && x.second <= v[j].second){
                    yes = false;
                    break;
                }
            }
            if(yes){
                ans.push_back(x);
            }
        }
        sort(ans.begin(), ans.end());
        cout << "Dominate Point: " << ans.size() + same / 2 << '\n';
        for(pair<int, int> i: ans){
            cout << "(" << i.first << "," << i.second << ")\n";
        }
    }
    return 0;
}


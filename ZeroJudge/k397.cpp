#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, d;
    cin >> n >> m;
    pair<int, int> x[101], y[101];
    for(int i = 0; i < n; i++){
        cin >> x[i].first >> x[i].second;
    }
    for(int i = 0; i < m; i++){
        cin >> y[i].first >> y[i].second;
    }
    cin >> d;
    int start = -1, end = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(x[i].second >= y[j].first && x[i].first <= y[j].second){
                start = max(x[i].first, y[j].first);
                end = min(x[i].second, y[j].second);
                if(end - start >= d){
                    cout << start << ' ' << start + d;
                    return 0;
                }
            }
        }
    }
    cout << -1 << '\n';
    return 0;
}
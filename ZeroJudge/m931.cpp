#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    double x = pow(a.first, 2) + pow(a.second, 2);
    double y = pow(b.first, 2) + pow(b.second, 2);
    return x > y;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> role(n);
    for(int i = 0; i < n; i++){
        cin >> role[i].first >> role[i].second;
    }
    sort(role.begin(), role.end(), cmp);
    cout << role[1].first << ' ' << role[1].second << '\n';
    return 0;
}

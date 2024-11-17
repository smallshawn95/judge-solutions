#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<long long, long long> a, pair<long long, long long> b)
{
    return a.first * b.second >= b.first * a.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<pair<long long, long long>> people(n);
    for(long long i = 0; i < n; i++){
        cin >> people[i].first >> people[i].second;
    }
    sort(people.begin(), people.end(), cmp);
    long long ans = 0, time = 0;
    for(int i = 0; i < n; i++){
        time += people[i].second;
        ans += people[i].first * time;
    }
    cout << ans << '\n';
    return 0;
}
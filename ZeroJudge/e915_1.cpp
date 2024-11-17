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
    vector<long long> time(n, 0);
    time[0] = people[0].second;
    for(int i = 1; i < n; i++){
        time[i] = time[i - 1] + people[i].second; 
    }
    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += people[i].first * time[i];
    }
    cout << ans << '\n';
    return 0;
}
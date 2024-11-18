#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(pair<int, pair<string, double>> a, pair<int, pair<string, double>> b)
{
    if(a.second.second == b.second.second){
        return a.first < b.first;
    }
    return a.second.second > b.second.second;
}

int main()
{
    int n;
    cin >> n;
    string name;
    double p, l, w, r;
    pair<int, pair<string, double>> data[50];
    for(int i = 0; i < n; i++){
        cin >> name >> p >> l >> w >> r;
        data[i].first = i;
        data[i].second = {name, p * (w / l) * r};
    }
    sort(data, data + n, cmp);
    for(int i = 0; i < n; i++){
        cout << data[i].second.first << '\n';
    }
    return 0;
}
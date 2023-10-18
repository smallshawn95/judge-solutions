#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(pair<string, double> a, pair<string, double> b)
{
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    string name;
    double p, l, w, r;
    pair<string, double> data[50];
    for(int i = 0; i < n; i++){
        cin >> name >> p >> l >> w >> r;
        data[i] = {name, p * (w / l) * r};
    }
    sort(data, data + n, cmp);
    for(int i = 0; i < n; i++){
        cout << data[i].first << '\n';
    }
    return 0;
}
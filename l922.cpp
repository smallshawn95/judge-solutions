#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

map<string, int> password = {
    {"ONE", 1}, {"TWO", 2}, {"THREE", 3},
    {"FOUR", 4}, {"FIVE", 5}, {"SIX", 6},
    {"SEVEN", 7}, {"EIGHT", 8}, {"NINE", 9}
};

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<string, int>> paint(n);
    for(int i = 0; i < n; i++){
        cin >> paint[i].first >> paint[i].second;
    }
    sort(paint.begin(), paint.end(), cmp);
    for(pair<string, int> i: paint){
        cout << password[i.first];
    }
    cout << '\n';
    return 0;
}

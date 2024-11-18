#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second < b.second;
}

int main()
{
    string str;
    cin >> str;
    map<char, int> data;
    for(int i = 0, len = str.length(); i < len; i++){
        data[str[i]] = i + 1;
    }
    int x = 0, num = data.size();
    pair<char, int> ans[100];
    for(auto i: data){
        ans[x] = {i.first, i.second};
        x += 1;
    }
    sort(ans, ans + num, cmp);
    for(int i = 0; i < num; i++){
        data[ans[i].first] = i + 1;
    }
    for(auto i: data){
        cout << i.second;
    }
    cout << '\n';
    return 0;
}
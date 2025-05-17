#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if(a.second == b.second){
        if(a.first > b.first){
            return true;
        }
        return false;
    }else if(a.second > b.second){
        return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    while(getline(cin, str)){
        map<char, int> m;
        for(char i: str){
            m[i]++;
        }
        vector<pair<char, int>> v;
        for(pair<char, int> i: m){
            v.push_back(i);
        }
        sort(v.begin(), v.end(), cmp);
        for(pair<char, int> i: v){
            cout << int(i.first) << ' ' << i.second << '\n';
        }
        cout << '\n';
    }
    return 0;
}


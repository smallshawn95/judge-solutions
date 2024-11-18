#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    int n;
    pair<char, int> count[26];
    for(int i = 0; i < 26; i++){
        count[i].first = char(i + 'A');
        count[i].second = 0;
    }
    cin >> n;
    cin.ignore();
    while(n--){
        string str;
        getline(cin, str);
        for(int i = 0, len = str.length(); i < len; i++){
            if(str[i] == ' '){
                continue;
            }
            if(str[i] >= 'A' && str[i] <= 'Z'){
                count[str[i] - 'A'].second += 1;
            }else if(str[i] >= 'a' && str[i] <= 'z'){
                count[str[i] - 'a'].second += 1;
            }
        }
    }
    sort(count, count + 26, cmp);
    for(auto& i: count){
        if(i.second != 0){
            cout << i.first << ' ' << i.second << '\n';
        }
    }
    return 0;
}
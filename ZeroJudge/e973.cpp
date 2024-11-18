#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

int cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first != b.first){
        return a.first > b.first;
    }else{
        return a.second < b.second;
    }
}

int main()
{
    string str;
    pair<int, int> num[10];
    for(int i = 0; i < 10; i++){
        num[i] = make_pair(0, i);
    }
    cin >> str;
    for(int i = 0, len = str.length(); i < len; i++){
        num[str[i] - '0'].first += 1;
    }
    sort(num, num + 10, cmp);
    for(int i = 0; i < 10; i++){
        if(num[i].first != 0){
            cout << num[i].second << ' ';
        }
    }
    return 0;
}
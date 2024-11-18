#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> num(n), score(n);
    for(int i = 0; i < n; i++){
        cin >> score[i];
        num[i] = score[i];
    }
    sort(num.begin(), num.end(), cmp);
    map<int, int> ans;
    for(int i = 0; i < n; i++){
        if(!ans.count(num[i])){
            ans[num[i]] = i + 1;
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[score[i]] << ' ';
    }
    cout << '\n';
    return 0;
}
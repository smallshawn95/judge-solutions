#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    string country, name;
    map<string, int> ans;
    cin >> n;
    while(n--){
        cin >> country;
        cin.ignore();
        getline(cin, name);
        ans[country]++;
    }
    for(auto& i: ans){
        cout << i.first << ' ' << i.second << '\n';
    }
    return 0;
}
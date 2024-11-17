#include <iostream>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    cin.ignore();
    while(n--){
        int sum = 0;
        string str;
        map<string, int> tree;
        while(getline(cin, str) && str != ""){
            tree[str]++;
            sum++;
        }
        for(auto& i: tree){
            cout << i.first << ' ' << fixed << setprecision(4) << (double)i.second * 100 / sum << '\n';
        }
    }
    return 0;
}
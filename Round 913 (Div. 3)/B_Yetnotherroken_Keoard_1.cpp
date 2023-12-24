#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int idx = 0;
        string data;
        cin >> data;
        vector<pair<int, char>> a, b;
        for(char i: data){
            if(i == 'b'){
                if(!a.empty()){
                    a.pop_back();
                }
            }else if(i == 'B'){
                if(!b.empty()){
                    b.pop_back();
                }
            }else if(i >= 'a' && i <= 'z'){
                a.push_back({idx++, i});
            }else if(i >= 'A' && i <= 'Z'){
                b.push_back({idx++, i});
            }
        }
        a.insert(a.end(), b.begin(), b.end());
        sort(a.begin(), a.end());
        for(pair<int, char> i: a){
            cout << i.second;
        }
        cout << '\n';
    }
    return 0;
}

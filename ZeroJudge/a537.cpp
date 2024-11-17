#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

bool is_prime(int num)
{
    if(num == 0 || num == 1){
        return false;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x = 1, t;
    cin >> t;
    while(t--){
        cout << "Case " << x++ << ": ";
        string str;
        cin >> str;
        map<char, int> data;
        for(char i: str){
            data[i]++;
        }
        vector<char> ans;
        for(pair<char, int> i: data){
            if(is_prime(i.second)){
                ans.push_back(i.first);
            }
        }
        if(ans.empty()){
            cout << "empty\n";
        }else{
            for(char i: ans){
                cout << i;
            }
        }
        cout << '\n';
    }
    return 0;
}

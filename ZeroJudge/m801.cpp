#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string need = "AHIMOTUVWXY";
    vector<bool> key(26, false);
    for(char i: need){
        key[i - 'A'] = true;
    }
    string str;
    cin >> str;
    int i, len = str.length();
    for(i = 0; i < len; i++){
        if(!key[str[i] - 'A']){
            break;
        }else if(str[i] != str[len - i - 1]){
            break;
        }
    }
    if(i == len){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}

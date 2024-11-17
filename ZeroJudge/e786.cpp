#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    int len = str.length();
    if(len % 2){
        cout << "NO\n";
    }else{
        string ans;
        for(int i = 0; i < len / 2; i++){
            ans += str[i];
            if(str[i] != str[len - i - 1]){
                cout << "NO\n";
                return 0;
            }
        }
        cout << "YES\n" << ans << '\n';
    }
    return 0;
}
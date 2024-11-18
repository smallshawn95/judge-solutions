#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    while(getline(cin, str)){
        int ans = 0;
        for(int i = 0, len = str.length(); i < len; i++){
            if(isalpha(str[i])){
                ans += 1;
                while(isalpha(str[i])){
                    i += 1;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
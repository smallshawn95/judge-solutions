#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ans = 0, temp = 1;
    string str;
    cin >> str;
    char c = str[0];
    if(str.length() == 1){
        cout << 1 << '\n';
    }else{
        for(int i = 0, len = str.length(); i < len - 1; i++){
            if(c == str[i + 1]){
                temp += 1;
            }else{
                temp = 1;
                c = str[i + 1];
            }
            if(temp > ans){
                ans = temp;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

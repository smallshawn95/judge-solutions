#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int len = str.length();
    vector<int> num(len);
    for(int i = 0; i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            num[i] = str[i] - 'a';
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            num[i] = str[i] - 'A';
        }
    }
    int ans = 0;
    bool yes = false;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < len; j++){
            if(num[j] == 11){
                if(num[j + 1] == 14){
                    if(num[j + 2] == 21){
                        if(num[j + 3] == 4){
                            yes = true;
                            break;
                        }
                    }
                }
            }
        }
        if(yes){
            cout << ans << '\n';
            break;
        }
        for(int j = 0; j < len; j++){
            num[j] += 1;
            if(num[j] == 26){
                num[j] = 0;
            }
        }
        ans += 1;
    }
    return 0;
}
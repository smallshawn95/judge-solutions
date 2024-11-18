#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        puts("");
        string str;
        cin >> str;
        int x = 0, len = str.length();
        string ans = "";
        while(true){
            ans += str[x++];
            if(len % x){
                continue;
            }
            bool yes = true;
            for(int i = 0; i < len; i += x){
                for(int j = 0; j < x; j++){
                    if(ans[j] != str[i + j]){
                        yes = false;
                    }
                }
            }
            if(yes){
                break;
            }
        }
        cout << x << '\n';
    }
    return 0;
}
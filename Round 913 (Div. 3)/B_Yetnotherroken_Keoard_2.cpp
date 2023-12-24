#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string data;
        cin >> data;
        reverse(data.begin(), data.end());
        string ans = "";
        int a = 0, b = 0;
        for(char i: data){
            if(i == 'B'){
                a += 1;
            }else if(i == 'b'){
                b += 1;
            }else if(i >= 'a' && i <= 'z'){
                if(b <= 0){
                    ans += i;
                }else{
                    b -= 1;
                }
            }else if(i >= 'A' && i <= 'Z'){
                if(a <= 0){
                    ans += i;
                }else{
                    a -= 1;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}

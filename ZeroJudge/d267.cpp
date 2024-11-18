#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        int ans[26] = {0};
        int temp, max_num = 0;
        string str;
        getline(cin, str);
        for(int i = 0, len = str.length(); i < len; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                temp = str[i] - 'a';
                ans[temp] += 1;
            }else if(str[i] >= 'A' && str[i] <= 'Z'){
                temp = str[i] - 'A';
                ans[temp] += 1;
            }
            if(ans[temp] > max_num){
                max_num = ans[temp];
            }
        }
        for(int i = 0; i < 26; i++){
            if(ans[i] == max_num){
                cout << char(i + 'a');
            }
        }
        cout << '\n';
    }
    return 0;
}
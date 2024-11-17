#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x = 0;
    string str;
    string num = "12312312312312312341231234";
    cin >> n;
    cin.ignore();
    while(n--){
        cout << "Case #" << ++x << ": ";
        int sum = 0;
        getline(cin, str);
        for(int i = 0, len = str.length(); i < len; i++){
            if(str[i] == ' '){
                sum += 1;
            }else{
                sum += (num[str[i] - 'a'] - '0');
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
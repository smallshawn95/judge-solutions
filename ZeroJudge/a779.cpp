#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    while(getline(cin, str)){
        cout << str << '\n';
        string ans;
        for(char i: str){
            if(i >= 'A' && i <= 'Z'){
                ans.push_back(i + 32);
            }else if((i >= '0' && i <= '9') || (i >= 'a' && i <= 'z')){
                ans.push_back(i);
            }
        }
        bool palindrome = true;
        for(int i = 0, len = ans.length(); i < len / 2; i++){
            if(ans[i] != ans[len - i - 1]){
                palindrome = false;
                break;
            }
        }
        if(palindrome){
            cout << "-- is a palindrome\n";
        }else{
            cout << "-- is not a palindrome\n";
        }
    }
    return 0;
}

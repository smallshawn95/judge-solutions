#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(cin >> str && str != "0"){
        int time = 0;
        string ans = str;
        if(str.length() == 1){
            time = 1;
        }
        while(str.length() > 1){
            int temp = 0;
            for(char i: str){
                temp += i - '0';
            }
            str = to_string(temp);
            time += 1;
        }
        if(str == "9"){
            cout << ans << " is a multiple of 9 and has 9-degree " << time << ".\n";
        }else{
            cout << ans << " is not a multiple of 9.\n";
        }
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string num;
    string key = "22233344455566677778889999";
    while(cin >> num){
        for(int i = 0, len = num.length(); i < len; i++){
            if(num[i] >= 'A' && num[i] <= 'Z'){
                cout << key[num[i] - 'A'];
            }else{
                cout << num[i];
            }
        }
        cout << '\n';
    }
    return 0;
}
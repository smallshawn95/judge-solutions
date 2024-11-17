#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    vector<int> data(26, 0);
    cin >> str;
    for(char i: str){
        data[i - 'A'] += 1;
    }
    string odd;
    int check = 0;
    for(int i = 0; i < 26; i++){
        if(data[i] % 2){
            check += 1;
            for(int j = 0; j < data[i]; j++){
                odd += i + 'A';
            }
        }
    }
    if(check > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }
    string even;
    for(int i = 0; i < 26; i++){
        if(!(data[i] % 2)){
            for(int j = 0; j < data[i] / 2; j++){
                even += i + 'A';
            }
        }
    }
    string ans = even + odd;
    for(int i = 0, len = even.length(); i < len; i++){
        ans += even[len - i - 1];
    }
    cout << ans << '\n';
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string key = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str;
    while(getline(cin, str)){
        for(int i = 0, len_i = str.length(); i < len_i; i++){
            bool find = false;
            for(int j = 0, len_j = key.length(); j < len_j; j++){
                if(str[i] == key[j]){
                    find = true;
                    cout << key[j - 1];
                    break;
                }
            }
            if(!find){
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}

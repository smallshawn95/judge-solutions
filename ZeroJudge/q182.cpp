#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    int n, len = str.length();
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        switch(k){
            case 0:
                for(int i = 0; i < len; i += 2){
                    swap(str[i], str[i + 1]);
                }
                break;
            case 1:
                for(int i = 0; i < len; i += 2){
                    if(str[i] > str[i + 1]){
                        swap(str[i], str[i + 1]);
                    }
                }
                break;
            case 2:
                string temp;
                for(int i = 0; i < len / 2; i++){
                    temp += str[i];
                    temp += str[len / 2 + i];
                }
                str = temp;
                break;
        }
    }
    cout << str << '\n';
    return 0;
}


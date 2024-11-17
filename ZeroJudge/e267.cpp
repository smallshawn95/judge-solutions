#include <iostream>
#include <string>
using namespace std;

int main()
{
    int g;
    while(cin >> g && g != 0){
        string str;
        cin >> str;
        int len = str.length() / g;
        for(int i = 0; i < g; i++){
            for(int j = (i + 1) * len - 1; j >= i * len; j--){
                cout << str[j];
            }
        }
        cout << '\n';
    }
    return 0;
}

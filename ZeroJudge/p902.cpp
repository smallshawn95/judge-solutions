#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int n;
    cin >> n;
    for(int i = 0, len = str.length(); i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = (str[i] - 'a' + n) % 26 + 'a';
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = (str[i] - 'A' + n) % 26 + 'A';
        }
    }
    cout << str << '\n';
    return 0;
}

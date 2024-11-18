#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(cin >> str){
        bool ans = true;
    int x = str.length() - 1;
    for(int y = 0; y < x; y++){
        if(str[x] != str[y]){
        ans = false;
        break;
        }
        x -= 1;
    }
    cout << (ans == true ? "yes\n" : "no\n");
    }
}

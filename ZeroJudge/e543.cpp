#include <iostream>
#include <string>
using namespace std;

string mirror = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

char english(char ch)
{
    if(ch >= 'A' && ch <= 'Z'){
        return mirror[ch - 'A'];
    }
    return mirror[ch - '0' + 25];
}

int main()
{
    string str;
    while(cin >> str){
        bool m = true, r = true;
        for(int i = 0, len = str.length(); i < (len + 1) / 2; i++){
            if(str[i] != str[len - i - 1]){
                r = false;
            }
            if(english(str[i]) != str[len - i - 1]){
                m = false;
            }
        }
        if(m && r){
            cout << str << " -- is a mirrored palindrome.\n\n";
        }else if(m){
            cout << str << " -- is a mirrored string.\n\n";
        }else if(r){
            cout << str << " -- is a regular palindrome.\n\n";
        }else{
            cout << str << " -- is not a palindrome.\n\n";
        }
    }
    return 0;
}
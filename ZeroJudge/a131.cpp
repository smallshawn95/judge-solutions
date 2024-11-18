#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string name;
    string num = "01230120022455012623010202";
    cout << "NAME                     SOUNDEX CODE\n";
    while(cin >> name){
        string code;
        code += name[0];
        for(int i = 1, name_len = name.length(); i < name_len; i++){
            if(code.length() == 4){
                break;
            }
            if(num[name[i] - 'A'] != num[name[i - 1] - 'A'] && num[name[i] - 'A'] != '0'){
                code += num[name[i] - 'A'];
            }
        }
        for(int i = code.length(); i < 4; i++){
            code += '0';
        }
        cout << "        "  << setw(25) << left << name << code << '\n';
    }
    cout << "                   END OF OUTPUT\n";
    return 0;
}
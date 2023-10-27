#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str;
    while(getline(cin, str)){
        char c;
        string temp;
        stringstream ss(str);
        while(ss >> temp){
            c = temp[0];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                cout << temp << "ay ";
            }else{
                for(int i = 1, len = temp.length(); i < len; i++){
                    cout << temp[i];
                }
                cout << c << "ay ";
            }
        }
        cout << '\n';
    }
    return 0;
}

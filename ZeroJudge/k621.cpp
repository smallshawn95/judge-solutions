#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    stack<char> s;
    for(char i: str){
        if(i == '(' || i == '['){
            s.push(i);
        }else if(i == ')'){
            if(s.empty() || s.top() == '['){
                cout << "Wrong\n";
                return 0;
            }
            s.pop();
        }else if(i == ']'){
            if(s.empty() || s.top() == '('){
                cout << "Wrong\n";
                return 0;
            }
            s.pop();
        }
    }
    cout << "Right\n";
    return 0;
}

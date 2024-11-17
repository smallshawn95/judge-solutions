#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string str;
        getline(cin, str);
        stack<char> parentheses;
        for(char i: str){
            if(parentheses.empty()){
                parentheses.push(i);
            }else if(i == ')' && parentheses.top() == '('){
                parentheses.pop();
            }else if(i == ']' && parentheses.top() == '['){
                parentheses.pop();
            }else{
                parentheses.push(i);
            }
        }
        if(parentheses.empty()){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}
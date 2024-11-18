#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long front_num(string x)
{
    long long num = 0;
    for(char c: x){
        if(c >= 'a' && c <= 'z'){
            num += c - 'a' + 10;
        }else{
            num += c - '0';
        }
    }
    return num;
}

long long back_num(string x, long long num)
{
    int p = stoi(x);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string line;
    while(cin >> line){
        string x;
        long long num;
        for(int i = 0, len = line.length(); i < len; i++){
            switch(line[i]){
                case '^':
                    num = front_num(x);
                    x.clear();
                    cout << num << '\n';
                    break;
                case '+':
                    num = back_num(x, num);
                    cout << num << '\n';
                    break;
                case '-':
                    num = back_num(x, num);
                    cout << num << '\n';
                    break;
                case '*':
                    num = back_num(x, num);
                    cout << num << '\n';
                    break;
                default:
                    x += line[i];
                    break;
            }
        }
    }
    return 0;
}

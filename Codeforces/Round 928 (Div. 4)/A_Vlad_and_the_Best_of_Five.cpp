#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a = 0, b = 0;
        string str;
        cin >> str;
        for(char i: str){
            if(i == 'A'){
                a += 1;
            }else if(i == 'B'){
                b += 1;
            }
        }
        cout << (a > b ? 'A' : 'B') << '\n';
    }
    return 0;
}

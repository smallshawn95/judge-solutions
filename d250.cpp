#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 9; i++){
        int sum = 0;
        string str;
        cin >> str;
        for(char j: str){
            sum += j - '0'; 
        }
        cout << 45 - sum << '\n';
    }
    return 0;
}
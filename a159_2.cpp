#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string num;
    while(n--){
        int a = 0, b = 0, x, y;
        for(int i = 0; i < 4; i++){
            cin >> num;
            x = (num[0] - '0') * 2;
            y = (num[2] - '0') * 2;
            a += x / 10 + x % 10 + y / 10 + y % 10;
            b += num[1] - '0' + num[3] - '0';
        }
        if((a + b) % 10 == 0){
            cout << "Valid\n";
        }else{
            cout << "Invalid\n";
        }
    }
    return 0;
}
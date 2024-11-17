#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int x = 0, y = 0, num;
        for(int i = 0; i < 4; i++){
            cin >> num;
            int a = num / 1000 * 2, b = (num % 100) / 10 * 2;
            int c = (num % 1000) / 100, d = num % 10;
            x += a / 10 + a % 10 + b / 10 + b % 10;
            y += c + d;
        }
        if((x + y) % 10 == 0){
            cout << "Valid\n";
        }else{
            cout << "Invalid\n";
        }
    }
    return 0;
}
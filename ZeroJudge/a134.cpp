#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int fib[40];
    fib[0] = 1;
    fib[1] = 2;
    for(int i = 2; i < 40; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int n, num, temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        int temp = num;
        string ans = "";
        bool first = false;
        for(int j = 39; j >= 0; j--){
            if(temp - fib[j] >= 0){
                ans += '1';
                temp -= fib[j];
                first = true;
            }else if(first){
                ans += '0';
            }
        }
        cout << num << " = " << ans << " (fib)\n";
    }
    return 0;
}
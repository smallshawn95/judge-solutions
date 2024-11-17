#include <iostream>
using namespace std;

int main()
{
    long long int n;
    while(cin >> n){
        if(n < 0){
            break;
        }else if(n == 0){
            cout << 0;
        }
        int x = 0, num[10000];
        while(n > 0){
            num[x] = n % 3;
            n /= 3;
            x += 1;
        }
        for(int i = (x - 1); i >= 0; i--){
            cout << num[i];
        }
        cout << '\n';
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    while(n){
        cout << n << ' ';
        if(n == 1){
            break;
        }
        if(n % 2){
            n = n * 3 + 1;
        }else{
            n = n / 2;
        }
    }
    return 0;
}

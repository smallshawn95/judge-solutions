#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, k;
    cin >> n;
    while(n--){
        cin >> k;
        if(k % 2 == 0 && k % 3 == 0){
            cout << 1 << ' ';
        }else if((k % 10) % 2 == 1 && k % 3 != 0){
            cout << 2 << ' ';
        }else if(int(sqrt(k)) * int(sqrt(k)) == k || (k % 2 == 0 && k % 7 != 0)){
            cout << 3 << ' ';
        }else{
            cout << 0 << ' ';
        }
    }
    cout << '\n';
    return 0;
}

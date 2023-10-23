#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int num[10000];
    while(cin >> n && n != 0){
        int i = 0, sum = 0;
        while(n > 0){
            num[i] = n % 2;
            n /= 2;
            i += 1;
        }
        cout << "The parity of ";
        for(int x = (i - 1); x >= 0; x--){
            sum += num[x];
            cout << num[x];
        }
        cout << " is " << sum << " (mod 2).\n";
    }
    return 0;
}
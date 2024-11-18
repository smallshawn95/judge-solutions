#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        int num[n];
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        sort(num, num + n);
        for(int i = 0; i < n; i++){
            cout << num[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
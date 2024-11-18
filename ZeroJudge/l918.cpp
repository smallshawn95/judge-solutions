#include <iostream>
using namespace std;

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    if(n == 1){
        cout << "YES\n";
        return 0;
    }
    int sum = m;
    while(m >= n){
        int num = m / n;
        sum += num;
        m %= n;
        m += num;
    }
    if(sum >= k){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}

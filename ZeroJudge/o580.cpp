#include <iostream>
using namespace std;

int num(int x)
{
    int sum = 0;
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            sum++;
        }
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y;
    cin >> x >> y;
    int ans, sum = 0;
    for(int i = y; i >= x; i--){
        int z = num(i);
        if(z >= sum){
            sum = z;
            ans = i;
        }
    }
    cout << ans << ' ' << sum << '\n';
    return 0;
}

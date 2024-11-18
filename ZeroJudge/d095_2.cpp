#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    int h, m;
    char a;
    while(cin >> h >> a >> m){
        if(h == 0 && m == 0){
            break;
        }
        double ans = abs(30 * h - 5.5 * m);
        if(ans > 180){
            ans = 360 - ans;
        }
        cout << fixed << setprecision(3) << ans << '\n';
    }
    return 0;
}
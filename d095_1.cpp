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
        float hC = 30 * h + m * 0.5;
        float mC = 6 * m;
        double ans = abs(hC - mC);
        if(ans > 180){
            cout << fixed << setprecision(3) << 360 - ans << '\n';
        }else{
            cout << fixed << setprecision(3) << ans << '\n';
        }
    }
    return 0;
}
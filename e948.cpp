#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, g, a, h, w;
    cin >> n;
    for(int i = 0; i < n; i++){
        float ans;
        cin >> g >> a >> h >> w;
        if(g == 1){
            ans = (13.7 * w) + (5.0 * h) - (6.8 * a) + 66;
        }else if(g == 0){
            ans = (9.6 * w) + (1.8 * h) - (4.7 * a) + 655;
        }
        cout << fixed << setprecision(2) << ans << '\n';
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, s, cp, lv;
    int ans = 0, max_cp = 0;
    cin >> n >> s;
    s /= 1000;
    for(int i = 0; i < n; i++){
        cin >> cp >> lv;
        if(lv < 30){
            cp += s * 10;
        }else if(lv < 40){
            cp += s * 50;
        }else if(lv <= 45){
            cp += s * 100;
        }
        if(cp > max_cp){
            max_cp = cp;
            ans = i + 1;
        }
    }
    cout << ans << ' ' << max_cp << '\n';
    return 0;
}
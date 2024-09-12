#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ans_c = 100;
        for(int i = 0; i <= 10; i++){
            ans_c = min((i - a + b - i), ans_c);
        }
        cout << ans_c << '\n';
    }
    return 0;
}

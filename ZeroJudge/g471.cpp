#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y;
    while(cin >> x >> y && x != 0){
        int z, num[501] = {0};
        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                cin >> z;
                num[j] += z;
            }
        }
        int ans = 0;
        for(int i = 0; i < x; i++){
            if(num[i] >= num[ans]){
                ans = i;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}
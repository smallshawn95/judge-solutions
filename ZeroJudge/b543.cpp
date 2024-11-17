#include <iostream>
#include <vector>
using namespace std;

struct Data{
    int ai, bi, ci;
};

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, n, ans = 0;
        cin >> n;
        vector<Data> staff(n);
        for(int i = 0; i < n; i++){
            cin >> staff[i].ai >> staff[i].bi >> staff[i].ci;
        }
        cin >> x;
        x -= 1;
        for(int i = 0; i < n; i++){
            if(i == x){
                continue;
            }
            if(staff[x].ai > staff[i].ai && staff[x].bi > staff[i].ci){
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
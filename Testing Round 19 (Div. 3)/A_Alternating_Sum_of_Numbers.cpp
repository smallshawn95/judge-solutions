#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x, y = 0;
        vector<int> num;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(i % 2){
                num[y] -= x;
                y += 1;
            }else{
                num.push_back(x);
            }
        }
        int sum = 0;
        for(int i: num){
            sum += i;
        }
        cout << sum << '\n';
    }
    return 0;
}

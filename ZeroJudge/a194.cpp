#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        vector<int> question(n);
        for(int &i: question){
            cin >> i;
        }
        int ans = 1;
        for(int i = 0; i < n - 1; i++){
            if(question[i] > question[i + 1]){
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
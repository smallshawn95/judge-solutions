#include <iostream>
#include <stack>
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
        char c;
        stack<int> ans;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 4; j++){
                cin >> c;
                if(c == '#'){
                    ans.push(j + 1);
                }
            }
        }
        while(!ans.empty()){
            cout << ans.top() << ' ';
            ans.pop();
        }
        cout << '\n';
    }
    return 0;
}

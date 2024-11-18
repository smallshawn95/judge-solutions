#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        while(true){
            int num[1001], x = 0;
            stack<int> stk;
            cin >> num[0];
            if(num[0] == 0){
                break;
            }
            for(int i = 1; i < n; i++){
                cin >> num[i];
            }
            for(int i = 1; i <= n; i++){
                stk.push(i);
                while(!stk.empty() && stk.top() == num[x]){
                    x += 1;
                    stk.pop();
                }
            }
            if(stk.empty()){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
    return 0;
}
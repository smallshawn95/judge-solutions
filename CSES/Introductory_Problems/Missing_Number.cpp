#include <iostream>
using namespace std;

int num[200005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    for(int i = 1; i < n; i++){
        cin >> x;
        num[x] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(!num[i]){
            cout << i << '\n';
            break;
        }
    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int pi[n], money = 0;
        for(int i = 0; i < n; i++){
            cin >> pi[i];
        }
        sort(pi, pi + n, cmp);
        for(int i = 0; i < n; i++){
            if((i + 1) % 3 == 0){
                money += pi[i];
            }
        }
        cout << money << '\n';
    }
    return 0;
}
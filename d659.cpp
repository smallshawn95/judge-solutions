#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Case " << i << ": ";
        int num[3];
        for(int j = 0; j < 3; j++){
            cin >> num[j];
        }
        sort(num, num + 3);
        cout << num[1] << '\n';
    }
    return 0;
}
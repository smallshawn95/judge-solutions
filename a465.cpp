#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n, ans = 0;
        char field[100];
        cin >> n >> field;
        for(int j = 0; j < n; j++){
            if(field[j] == '.'){
                field[j + 1] = '#';
                field[j + 2] = '#';
                ans += 1;
            }
        }
        cout << "Case " << i << ": " << ans << '\n';
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char c;
    int n, m;
    cin >> n >> m >> c;
    long long num;
    for(int i = 0; i < n; i++){
        cin >> num;
        vector<bool> two(m, false);
        for(int i = 0; i < m; i++){
            two[i] = num % 2;
            num /= 2;
        }
        for(int i = m - 1; i >= 0; i--){
            if(two[i]){
                cout << c << ' ';
            }else{
                cout << ". ";
            }
        }
        cout << '\n';
    }
    return 0;
}

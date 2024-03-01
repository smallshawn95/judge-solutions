#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, num, sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> num;
            sum += abs(num);
        }
        cout << sum << '\n';
    }
    return 0;
}

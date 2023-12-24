#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
        string str;
        cin >> str;
        int max_num = 0;
        vector<int> letter(26, 0);
        for(char i: str){
            letter[i - 'a'] += 1;
            max_num = max(max_num, letter[i - 'a']);
        }
        if(max_num * 2 <= n){
            if(n % 2 == 1){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else{
            cout << n - 2 * (n - max_num) << '\n';
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        int len = str.length();
        int num = sqrt(len);
        if(num * num != len){
            cout << "INVALID\n";
            continue;
        }
        int x = 0;
        char ans[num][num];
        for(int i = 0; i < num; i++){
            for(int j = 0; j < num; j++){
                ans[i][j] = str[x++];
            }
        }
        for(int i = 0; i < num; i++){
            for(int j = 0; j < num; j++){
                cout << ans[j][i];
            }
        }
        cout << '\n';
    }
    return 0;
}
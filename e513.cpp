#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x = 1, t;
    cin >> t;
    while(t--){
        cout << "Test #" << x++ << ": ";
        int n;
        char a, b;
        cin >> a >> b >> n;
        vector<vector<long long>> num(n, vector<long long>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> num[i][j];
            }
        }
        bool non = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(num[i][j] < 0 || num[n - i - 1][n - j - 1] < 0){
                    non = true;
                    break;
                }
                if(num[i][j] != num[n - i - 1][n - j - 1]){
                    non = true;
                    break;
                }
            }
            if(non){
                break;
            }
        }
        if(non){
            cout << "Non-symmetric.\n";
        }else{
            cout << "Symmetric.\n";
        }
    }
    return 0;
}

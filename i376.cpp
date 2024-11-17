#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> num(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int max_num = *max_element(num[i].begin(), num[i].end());
        for(int j = 0; j < n; j++){
            if(num[i][j] == max_num){
                int min_num = 1001;
                for(int k = 0; k < n; k++){
                    if(num[k][j] < min_num){
                        min_num = num[k][j];
                    }
                }
                if(max_num == min_num){
                    cout << i << ' ' << j << '\n';
                    return 0;
                }
            }
        }

    }
    cout << "NO\n";
    return 0;
}
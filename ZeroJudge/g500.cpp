#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 1; i <= 30; i++){
        for(int j = i + 1; j <= 30; j++){
            for(int k = j + 1; k <= 30; k++){
                for(int l = k + 1; l <= 30; l++){
                    for(int m = l + 1; m <= 30; m++){
                        int a = i * 20;
                        int b = j * j;
                        int c = k * 3;
                        int d = (k + l) * 4;
                        int e = (m - l) * 5;
                        if(a + b + c + d + e == n){
                            ans += 1;
                        }
                    }
                }
            }
        }
    }
    if(ans == 0){
        cout << n * 5 - 3 << '\n';
    }else{
        cout << ans * ans * ans << '\n';
    }
    return 0;
}
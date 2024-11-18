#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[5], b[5];
    for(int &i: a){
        cin >> i;
    }
    for(int &i: b){
        cin >> i;
    }
    int ans = 1, num;
    do{
        if(ans & 1){
            if(a[0] % 3 == 0){
                num = 0;
                for(int &i: a){
                    num = max(i, num);
                }
                for(int &i: a){
                    if(i == num){
                        i /= 2;
                    }
                }
            }else{
                num = 1001;
                for(int &i: a){
                    if(i == 0){
                        continue;
                    }
                    num = min(i, num);
                }
                for(int &i: a){
                    if(i == num){
                        i--;
                    }
                }
            }
        }else{
            if(b[0] % 3 == 0){
                num = 0;
                for(int &i: b){
                    num = max(i, num);
                }
                for(int &i: b){
                    if(i == num){
                        i /= 2;
                    }
                }
            }else{
                num = 1001;
                for(int &i: b){
                    if(i == 0){
                        continue;
                    }
                    num = min(i, num);
                }
                for(int &i: b){
                    if(i == num){
                        i--;
                    }
                }
            }
        }
        ans = num;
        cout << ans << '\n';
    }while(ans != 0);
    return 0;
}

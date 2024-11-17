#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, time = 1;
    cin >> n;
    while(n--){
        cout << "Case " << time++ << ": ";
        string num;
        cin >> num;
        int x = 0;
        char c;
        for(int i = 0, len = num.length(); i < len; i++){
            if(num[i] >= 'A' && num[i] <= 'Z'){
                for(int j = 0; j < x; j++){
                    cout << c;
                }
                c = num[i];
                x = 0;
            }else{
                x *= 10;
                x += num[i] - '0';
            }
            if(i == len - 1){
                for(int j = 0; j < x; j++){
                    cout << c;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}

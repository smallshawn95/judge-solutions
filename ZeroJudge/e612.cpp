#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0;
        cin >> n;
        for(int i = 1; i <= n; i++){
            int num = n;
            while(num){
                sum += num % 10;
                num /= 10;
            }
        }
        if(sum % 3 == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
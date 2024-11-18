#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int num = 0;
        for(int i = 2; i <= n; i++){
            bool prime = true;
            for(int j = 2; j < i; j++){
                if(i % j == 0){
                    prime = false;
                    break;
                }
            }
            if(prime){
                num += 1;
                cout << setw(10) << i;
            }
            if(num == 5 || i == n){
                num = 0;
                cout << '\n';
            }
        }
    }
    return 0;
}
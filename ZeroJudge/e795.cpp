#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int d, n;
    cin >> d;
    while(d--){
        cin >> n;
        int temp = n, digit = 10000000;
        bool is_prime = true;
        while(temp > 0){
            for(int i = 2; i <= sqrt(temp); i++){
                if(temp % i == 0){
                    is_prime = false;
                    break;
                }
            }
            if(!is_prime){
                break;
            }
            temp %= digit;
            digit /= 10;
        }
        if(is_prime){
            cout << n << " is a Prime Day!\n";
        }else{
            cout << n << " isn't a Prime Day!\n";
        }
    }
}

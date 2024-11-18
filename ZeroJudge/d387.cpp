#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num)
{
    if(num == 0 || num == 1){
        return false;        
    }
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    while(cin >> num){
        bool x = false, y = false;
        int temp = num, reverse_num = 0;
        while(temp > 0){
            reverse_num = (reverse_num * 10) + (temp % 10);
            temp /= 10;
        }
        if(is_prime(num)){
            x = true;
        }
        if(is_prime(reverse_num)){
            y = true;
        }
        if(num == reverse_num){
            y = false;
        }
        if(x && y){
            cout << num << " is emirp.\n";
        }else if(x){
            cout << num << " is prime.\n";
        }else{
            cout << num << " is not prime.\n";
        }
    }
    return 0;
}

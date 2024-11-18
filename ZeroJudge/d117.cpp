#include <iostream>
using namespace std;

bool is_prime(int num)
{
    for(int i = 2; i < num; i++){
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
    string str;
    while(cin >> str){
        int num = 0, len = str.length();
        for(int i = 0; i < len; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                num += str[i] - 'a' + 1;
            }else if(str[i] >= 'A' && str[i] <= 'Z'){
                num += str[i] - 'A' + 27;
            }
        }
        if(is_prime(num)){
            cout << "It is a prime word.\n";
        }else{
            cout << "It is not a prime word.\n";
        }
    }
    return 0;
}
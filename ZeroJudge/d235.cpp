#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    while(cin >> num){
        int a = 0, b = 0;
        if(num == "0"){
            break;
        }
        for(int i = 0; i < num.length(); i++){
            int temp = num[i] - int('0');
            if(i % 2 == 0){
                a += temp;
            }else{
                b += temp;
            }
        }
        int ans = abs(a - b) % 11;
        if(ans == 0){
            cout << num << " is a multiple of 11.\n";
        }else{
            cout << num << " is not a multiple of 11.\n";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int num = 1, times = 0;
    while(true){
        int temp = num;
        while(temp){
            if(!(temp % 2)){
                temp /= 2;
            }else if(!(temp % 3)){
                temp /= 3;
            }else if(!(temp % 5)){
                temp /= 5;
            }else if(temp == 1){
                times += 1;
                break;
            }else{
                break;
            }
        }
        if(times == 1500){
            cout << "The 1500'th ugly number is " << num << ".\n";
            break;
        }
        num += 1;
    }
    return 0;
}
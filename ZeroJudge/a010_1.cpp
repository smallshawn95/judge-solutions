#include <iostream>
using namespace std;

int main()
{
    int num, x = 2, temp, k = 0, a[10000], b[10000] = {0};
    cin >> num;
    while(num > 1){
        if(num % x == 0){
            a[k] = x;
            b[k] += 1;
            temp = x;
            num /= x;
        }else{
            if(temp == x){
                k += 1;
            }
            x += 1;
        }
    }
    for(int i = 0; i <= k; i++){
        if(b[i] > 1){
            cout << a[i] << "^" << b[i];
        }else{
            cout << a[i];
        }
        if(i < k){
            cout << " * ";
        }
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
    }
    if(n >= 11 && n <= 20){
        sum = round(sum * 0.95);
    }else if(n >= 21 && n <= 40){
        sum = round(sum * 0.9);
    }else if(n >= 41){
        sum = round(sum * 0.85);
    }
    if(sum >= 1200){
        cout << 1200 << '\n';
    }else{
        cout << sum << '\n';
    }
    return 0;
}

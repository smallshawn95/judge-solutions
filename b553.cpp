#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int time = 0;
        while(n != 1){
            if(n % 2){
                n = n * 3 + 1;
            }else{
                n = n / 2;
            }
            time += 1;
        }
        cout << time << '\n';
    }
    return 0;
}
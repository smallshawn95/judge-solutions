#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
        int time = 0;
        for(int i = a; i <= b; i++){
            int temp = sqrt(i);
            if(i == temp * temp){
                time += 1;
            }
        }
        cout << time << '\n';
    }
    return 0;
}
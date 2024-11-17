#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int time = 1;
    while(cin >> n){
        if(n < 0){
            break;
        }
        cout << "Case " << time << ": ";
        cout << ceil(log2(n)) << '\n';
        time += 1;
    }
    return 0;
}
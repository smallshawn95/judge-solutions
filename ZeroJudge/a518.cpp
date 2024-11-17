#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x, y;
    while(cin >> x >> y){
        if(x == -1 || y == -1){
            break;
        }
        int ans = abs(x - y);
        cout << (ans > 50 ? 100 - ans : ans) << '\n';
    }
    return 0;
}
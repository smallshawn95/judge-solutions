#include <iostream>
using namespace std;

int main()
{
    int t, r;
    cin >> t >> r;
    int x = t - (1 + r) * (t / (1 + r));
    if(x <= r && x != 0){
        cout << 1 << '\n';
    }else{
        cout << 0 << '\n';
    }
    return 0;
}

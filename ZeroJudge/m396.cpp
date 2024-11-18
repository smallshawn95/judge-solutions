#include <iostream>
using namespace std;

int main()
{
    int t, g, w, e, b;
    cin >> t >> g >> w >> e >> b;
    if(g + w + e + b > t){
        cout << -1 << '\n';
    }else{
        cout << g + w + e + b << '\n';
    }
    return 0;
}
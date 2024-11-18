#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, s, d;
    cin >> t;
    while(t--){
        cin >> s >> d;
        if(((s + d) & 1) || s < d){
            cout << "impossible" << endl;
        }else{
            cout << (s + d) / 2 << " " << (s - d) / 2 << '\n';
        }
    }
    return 0;
}
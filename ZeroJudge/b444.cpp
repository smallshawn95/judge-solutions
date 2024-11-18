#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long x, z;
    string y;
    while(cin >> x >> y >> z){
        long long sum = 1;
        for(int i = y.length() - 1; i >= 0; i--){
            if(y[i] == '1'){
                sum = (sum * x) % z;
            }
            x = (x * x) % z;
        }
        cout << sum << '\n';
    }
    return 0;
}

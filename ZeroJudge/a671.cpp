#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double n, p;
    while(cin >> n >> p){
        cout << (long long)((exp(log(p) / n)) + 0.5) << '\n';
    }
    return 0;
}
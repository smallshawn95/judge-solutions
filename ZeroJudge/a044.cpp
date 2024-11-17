#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        cout << int((pow(n, 3) + 5 * n + 6) / 6) << '\n';
    }
    return 0;
}

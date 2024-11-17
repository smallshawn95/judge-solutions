#include <iostream>
using namespace std;

void bee(long long n, long long &x, long long &y)
{
    for(long long i = 0; i < n; i++){
        long long temp = x;
        x = x + y;
        y = temp + 1;

    }
}

int main()
{
    int n;
    while(cin >> n && n != -1){
        long long x = 0, y = 1;
        bee(n, x, y);
        cout << x << ' ' << x + y << '\n';
    }
    return 0;
}
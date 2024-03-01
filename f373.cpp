#include <iostream>
using namespace std;
int main()
{
    int N, a, b;
    cin >> N;
    a = N - (N / 2000) * 200;
    b = N - (N / 1000) * 100;
    if(a > b){
        cout << b << ' ' << 1 << '\n';
    }else{
        cout << a << ' ' << 0 << '\n';
    }
}

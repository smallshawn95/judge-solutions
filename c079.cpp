#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b){
        cout << a + a / b + (a / b + a % b) / b << '\n';
    }
    return 0;
}
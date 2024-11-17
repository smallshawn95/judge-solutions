#include <iostream>
using namespace std;

int main()
{
    int n, number, x = 0, y = 0, z = 0;
    cin >> n;
    for (int i = 1; i <= n;i++){
        cin >> number;
        if (number % 3 == 0)
            x += 1;
        else if (number % 3 == 1)
            y += 1;
        else
            z += 1;
    }
    cout << x << ' ' << y << ' ' << z << '\n';
    return 0;
}

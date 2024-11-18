#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, x_1, x_2, n, temp;
    cin >> a >> b >> c;
    n = b * b - 4 * a * c;
    if (n < 0)
        cout << "No real root" << endl;
    else if (n == 0)
        cout << "Two same roots x=" << (-b / (2 * a)) << endl;
    else if (n > 0){
        x_1 = (-b + sqrt(n)) / (2 * a);
        x_2 = (-b - sqrt(n)) / (2 * a);
        if (x_1 < x_2){
            temp = x_1;
            x_1 = x_2;
            x_2 = temp;
        }
        cout << "Two different roots x1=" << x_1 << " , x2=" << x_2 << endl;
    }
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d, e, f, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    if(a * e == b * d){
        if(a * f == c * d){
            cout << "Too many\n";
        }else{
            cout << "No answer\n";
        }
    }else{
        x = (c * e - b * f) / (a * e - b * d);
        y = (c * d - a * f) / (b * d - a * e);
        cout << "x=" << fixed << setprecision(2) << x << '\n';
        cout << "y=" << fixed << setprecision(2) << y << '\n';
    }
    return 0;
}

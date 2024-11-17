#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    x += 2;
    y += 30;
    if(y >= 60){
        x += 1;
        y -= 60;
    }
    x %= 24;
    cout << setfill('0') << setw(2) << x << ':' << setw(2) << y << '\n';
    return 0;
}

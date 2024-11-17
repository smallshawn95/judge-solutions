#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, a, b, sum;
    cin >> t;
    for (int x = 1; x <= t;x ++){
        sum = 0;
        cin >> a >> b;
        for (float y = a;y <= b;y ++){
            if (sqrt(y) == (int)sqrt(y))
                sum = sum + y;
        }
        cout << "Case " << x << ": " << sum << endl;
    }
    return 0;
}

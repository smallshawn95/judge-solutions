#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x;
    for (x = x;x > 0;x --){
        cin >> y >> z;
        cout << (y / 3) * (z / 3) << endl;
    }
    return 0;
}
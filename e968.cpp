#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n;
    cin >> x >> y >> z;
    for (int i = n; i > 0; i--){
        if (i != x && i != y && i != z)
            cout << "No. " << i << '\n';
    }
    return 0;
}
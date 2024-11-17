#include <iostream>
using namespace std;

int main()
{
    int day, month, ans;
    cin >> month >> day;
    ans = (month * 2 + day) % 3;
    if (ans == 0)
        cout << "´¶³q";
    else if (ans == 1)
        cout << "¦N";
    else if (ans == 2)
        cout << "¤j¦N";
    return 0;
}

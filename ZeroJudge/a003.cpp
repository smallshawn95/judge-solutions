#include <iostream>
using namespace std;

int main()
{
    int day, month, ans;
    cin >> month >> day;
    ans = (month * 2 + day) % 3;
    if (ans == 0)
        cout << "普通";
    else if (ans == 1)
        cout << "吉";
    else if (ans == 2)
        cout << "大吉";
    return 0;
}

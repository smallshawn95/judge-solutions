#include <iostream>
using namespace std;

int total(int m, int d)
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    for(int i = 0; i < m - 1; i++){
        sum += days[i];
    }
    sum += d;
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int month_a, month_b, day_a, day_b;
    cin >> month_a >> day_a;
    cin >> month_b >> day_b;
    int ans = total(month_b, day_b) - total(month_a, day_a);
    cout << (ans + 365) % 365 << '\n';
    return 0;
}

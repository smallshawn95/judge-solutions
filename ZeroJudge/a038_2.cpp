#include <iostream>
using namespace std;

int main()
{
    int x = 0, n = 0, number;
    double ans_number[100] = {0};
    cin >> number;
    if (number == 0)
        cout << 0;
    else{
        while (number > 0){
            ans_number[x] = number % 10;
            number /= 10;
            x++;
        }
        while (ans_number[n] == 0)
            n++;
        for (int i = n; i < x; i++)
            cout << ans_number[i];
    }
    return 0;
}

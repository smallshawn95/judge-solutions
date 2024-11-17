#include <iostream>
using namespace std;

int main()
{
    int x, n, number, num[100], sum;
    cin >> n;
    for (int i = 1; i <= n;i++){
        sum = 1;
        x = 0;
        cin >> number;
        if (number == 0)
            cout << 0 << endl;
        else{
            while (number > 0){
                num[x] = number % 10;
                number /= 10;
                x++;
            }
            for (int y = 0; y < x;y++)
                sum *= num[y];
            cout << sum << endl;
        }
    }
    return 0;
}

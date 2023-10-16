#include <iostream>
using namespace std;

int main()
{
    int number, ans, no = 1;
    cin >> number;
    if (number == 0)
        cout << 0;
    else{
        while (number > 0){
        ans = number % 10;
        if (no){
            if (ans != 0){
                cout << ans;
            no = 0;
            }
        }
        else
            cout << ans;
        number = number / 10;
        }
    }
    return 0;
}

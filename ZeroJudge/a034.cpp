#include <iostream>
using namespace std;

int main()
{
    int ten_number;
    while(cin >> ten_number){
        int n = 0, two_number[100];
        if (ten_number == 0)
            cout << 0;
        while (ten_number != 0){
            two_number[n] = ten_number % 2;
            ten_number = ten_number / 2;
            n = n + 1;
        }
        for (int i = n - 1; i >= 0; i--){
            cout << two_number[i];
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while (cin >> n){
        int number[n];
        for (int i = 0;i < n;i++)
            cin >> number[i];
        sort(number, number + n);
        for (int i = 0;i < n;i++)
            cout << number[i] << ' ';
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int t,number[5];
    cin >> t;
    for (int x = 1; x <= t; x ++){
        for (int y = 0; y < 4; y ++)
            cin >> number[y];
        if (number[1] - number[0] == number[2] - number[1])
        {
            number[4] = number[3] + (number[3] - number[2]);
            for (int z = 0; z < 5; z++)
                cout << number[z] << " ";
        }
        else if (number[1] / number[0] == number[2] / number[1])
        {
            number[4] = number[3] * (number[3] / number[2]);
            for (int z = 0; z < 5; z++)
                cout << number[z] << " ";
        }
        cout << endl;
    }
    return 0;
}

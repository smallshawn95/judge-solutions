#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n){
        int grade, sum = 0;
        for (int i = 0;i < n;i ++){
            cin >> grade;
            if (grade == 0)
                n -= 1;
            sum += grade;
        }
        if (sum / 60 < 60)
            cout << "no\n";
        else
            cout << "yes\n";
    }
    return 0;
}

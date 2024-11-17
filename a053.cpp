#include <iostream>
using namespace std;

int main()
{
    int question, grade;
    while (cin >> question){
        if (question >= 0 && question <= 10)
            grade = question * 6;
        else if (question > 10 && question <= 20)
            grade = 10 * 6 + (question - 10) * 2;
        else if (question > 20 && question < 40)
            grade = 10 * 6 + 10 * 2 + (question - 20);
        else if (question >= 40)
            grade = 100;
        cout << grade << endl;
    }
    return 0;
}

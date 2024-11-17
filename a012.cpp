#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long people_a, people_b;
    while (cin >> people_a >> people_b)
        cout << abs(people_a - people_b) << endl;
    return 0;
}
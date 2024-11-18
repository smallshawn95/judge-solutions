#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> weekday = {
        {"Sunday", 0},
        {"Monday", 1},
        {"Tuesday", 2},
        {"Wednesday", 3},
        {"Thursday", 4},
        {"Friday", 5},
        {"Saturday", 6}
    };
    string day;
    cin >> day;
    if(weekday.count(day)){
        cout << weekday[day] << '\n';
    }else{
        cout << "error\n";
    }
    return 0;
}

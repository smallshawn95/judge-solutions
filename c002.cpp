#include <iostream>
using namespace std;

int f91(int num)
{
    if(num > 100){
        return num - 10;
    }
    else if(num <= 100){
        return f91(f91(num + 11));
    }
}

int main()
{
    int num;
    while(cin >> num){
        if(num != 0){
            cout << "f91(" << num << ") = " << f91(num) << '\n';
        }
    }
    return 0;
}
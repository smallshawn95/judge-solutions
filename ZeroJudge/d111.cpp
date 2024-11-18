#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n != 0){
        if(int(sqrt(n)) * int(sqrt(n)) == n){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }
    return 0;
}
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t >> ws;
    while(t--){
        string num;
        getline(cin, num);
        long long x, sum = 0;
        stringstream ss(num);
        while(ss >> x){
            sum += x;
        }
        cout << sum << '\n';
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, m, i, sum;
    while(cin >> n >> m){
        sum = n, i = 1;
        while(sum <= m){
            n += 1;
            sum += n;
            i += 1;
        }
        cout << i << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

long long prefix[200001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    prefix[0] = 0;
    for(int i = 1; i <= 200000; i++){
        int x = i, sum = 0;
        while(x){
            sum += x % 10;
            x /= 10;
        }
        prefix[i] = prefix[i - 1] + sum;
    }
    while(t--){
        int num;
        cin >> num;
        cout << prefix[num] << '\n';
    }
    return 0;
}

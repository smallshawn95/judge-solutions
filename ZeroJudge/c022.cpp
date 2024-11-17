#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        long long int sum = 0;
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            if(j % 2 == 1){
                sum += j;
            }
        }
        cout << "Case " << i << ": " << sum << '\n';
    }
    return 0;
}
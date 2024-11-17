#include <iostream>
using namespace std;

int main()
{
    int n, x = 1;
    while(cin >> n && n != 0){
        int sum = 0, ans = 0;
        int *ptr = new int[n];
        for(int i = 0; i < n; i++){
            cin >> *(ptr + i);
            sum += *(ptr + i);
        }
        sum /= n;
        for(int i = 0; i < n; i++){
            if(*(ptr + i) > sum){
                ans += *(ptr + i) - sum;
            }
        }
        cout << "Set #" << x << '\n';
        cout << "The minimum number of moves is " << ans << ".\n";
        x += 1;
        delete [] ptr;
    }
    return 0;
}
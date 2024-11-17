#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x, num[10] = {0};
        cin >> x;
        for(int j = 1; j <= x; j++){
            int temp = j;
            while(temp > 0){
                num[temp % 10] += 1;
                temp /= 10;
            }
        }
        for(int k = 0; k < 10; k++){
            cout << num[k] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
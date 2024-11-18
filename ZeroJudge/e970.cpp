#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    int b = num[n - 1], sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % b == 1){
            sum += num[i - 1];
        }
    }
    int x = sum % n;
    if(x == 0){
        cout << n << ' ' << num[n - 1] << '\n';
    }else{
        cout << x << ' ' << num[x - 1] << '\n';
    }
    return 0;
}

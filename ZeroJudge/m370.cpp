#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    vector<int> num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    sort(num.begin(), num.end());
    int small = 0, big = 0;
    for(int i = 0; i < n; i++){
        if(x > num[i]){
            small += 1;
        }else{
            big += 1;
        }
    }
    if(small > big){
        cout << small << ' ' << num[0] << '\n';
    }else{
        cout << big << ' ' << num[n - 1] << '\n';
    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i = 0; i < n; i++){
        cin >> height[i];
    }
    int x = height[0], ans = 0;
    for(int i = 1; i < n - 1; i++){
        if(height[i] > height[i - 1]){
            x = height[i - 1];
        }
        if(height[i] > x && height[i] > height[i + 1]){
            ans += 1;
            x = height[i];
        }
    }
    cout << ans << '\n';
    return 0;
}
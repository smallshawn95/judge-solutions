#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n && n != 0){
        long long x, sum = 0;
        priority_queue<int, vector<int>, greater<int>> num;
        for(int i = 0; i < n; i++){
            cin >> x;
            num.push(x);
        }
        while(num.size() > 1){
            long long temp = 0;
            temp += num.top();
            num.pop();
            temp += num.top();
            num.pop();
            sum += temp;
            num.push(temp);
        }
        cout << sum << '\n';
    }
    return 0;
}
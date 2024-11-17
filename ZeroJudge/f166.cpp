#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, p, l, r;
    cin >> n >> p >> l >> r;
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
        if(data[i] < 0 || data[i] >= n){
            data[i] = n;
        }
    }
    int now, next;
    vector<int> grid(n, -1);
    grid[0] = 0;
    queue<int> q;
    q.push(0);
    while(!q.empty() && grid[p] == -1){
        now = q.front();
        q.pop();
        next = now - l;
        if(next >= 0 && data[next] != n && grid[data[next]] == -1){
            grid[data[next]] = grid[now] + 1;
            q.push(data[next]);
        }
        next = now + r;
        if(next < n && data[next] != n && grid[data[next]] == -1){
            grid[data[next]] = grid[now] + 1;
            q.push(data[next]);
        }
    }
    cout << grid[p] << '\n';
    return 0;
}

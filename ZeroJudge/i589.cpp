#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> city(n + 1);
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        city[a].push_back(b);
        city[b].push_back(a);
    }
    while(q--){
        cin >> a >> b >> c;
        queue<int> q;
        q.push(a);
        vector<bool> visited(n + 1, false);
        while(!q.empty()){
            int x = q.front();
            q.pop();
            visited[x] = true;
            for(int i: city[x]){
                if(i == c){
                    continue;
                }else if(!visited[i]){
                    q.push(i);
                }
            }
        }
        if(visited[b]){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}

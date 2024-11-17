#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int v, e, a, b;
        cin >> v >> e;
        vector<vector<int>> graph(v + 1);
        for(int i = 0; i < e; i++){
            cin >> a >> b;
            graph[b].push_back(a);
        }
        bool circle = false;
        vector<bool> visited(v + 1, false);
        for(int i = 1; i <= v; i++){
            queue<int> q;
            q.push(i);
            visited[i] = true;
            while(!q.empty() && !circle){
                int x = q.front();
                q.pop();
                for(int j: graph[x]){
                    if(i == j){
                        circle = true;
                        break;
                    }
                    if(!visited[j]){
                        q.push(j);
                        visited[x] = true;
                    }
                }
            }
            if(circle){
                break;
            }
        }
        if(circle){
            cout << "O______O\n";
        }else{
            cout << "W+W\n";
        }
    }
    return 0;
}

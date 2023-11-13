#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int> dist;
    map<string, bool> visited;
    map<string, vector<string>> grid;
    while(t--){
        string s, p;
        cin >> s >> p;
        dist[s] = 100;
        dist[p] = 100;
        grid[s].push_back(p);
        grid[p].push_back(s);
        visited[s] = false;
        visited[p] = false;
    }
    string i, o;
    cin >> i >> o;
    queue<string> q;
    dist[i] = 0;
    q.push(i);
    while(!q.empty()){
        string x = q.front();
        q.pop();
        if(!visited[x]){
            visited[x] = true;
            for(string i: grid[x]){
                dist[i] = min(dist[i], dist[x] + 1);
                q.push(i);
            }
        }
    }
    if(visited[o]){
        cout << "True " << dist[o] << '\n';
    }else{
        cout << "False\n";
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    map<string, vector<string>> road;
    while(n--){
        string a, b;
        cin >> a >> b;
        road[a].push_back(b);
        road[b].push_back(a);
    }
    string start, end;
    cin >> start >> end;
    queue<string> q;
    map<string, pair<int, int>> info;
    q.push(start);
    while(!q.empty()){
        string x = q.front();
        q.pop();
        info[x].first += 1;
        for(string i: road[x]){
            if(info[i].first == 0 && info[i].second == 0){
                q.push(i);
            }
        }
    }
    return 0;
}

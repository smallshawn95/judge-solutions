#include <iostream>
#include <map>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if(a.second == b.second){
        return a.first < b.first;
    }else{
        return a.second > b.second;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, time = 1;
    cin >> n;
    while(n--){
        cout <<  "World #" << time++ << '\n';
        int h, w;
        cin >> h >> w;
        vector<vector<char>> world(h, vector<char>(w));
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> world[i][j];
            }
        }
        map<char, int> language;
        vector<vector<bool>> visited(h, vector<bool>(w, false));
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(!visited[i][j]){
                    char c = world[i][j];
                    stack<pair<int, int>> s;
                    s.push({i, j});
                    while(!s.empty()){
                        int x = s.top().first, y = s.top().second;
                        s.pop();
                        if(visited[x][y]){
                            continue;
                        }
                        visited[x][y] = true;
                        if(x > 0 && world[x - 1][y] == c){
                            s.push({x - 1, y});
                        }
                        if(x < h - 1 && world[x + 1][y] == c){
                            s.push({x + 1, y});
                        }
                        if(y > 0 && world[x][y - 1] == c){
                            s.push({x, y - 1});
                        }
                        if(y < w - 1 && world[x][y + 1] == c){
                            s.push({x, y + 1});
                        }
                    }
                    language[c] += 1;
                }
            }
        }
        vector<pair<char, int>> ans; 
        for(auto i: language){
            ans.push_back(i);
        }
        sort(ans.begin(), ans.end(), cmp);
        for(auto i: ans){
            cout << i.first << ": " << i.second << '\n';
        }
    }
    return 0;
}
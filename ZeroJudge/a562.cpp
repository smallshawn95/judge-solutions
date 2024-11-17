#include <iostream>
#include <set>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int move_x[4] = {-1, 1, 0, 0};
int move_y[4] = {0, 0, -1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n;
    while(n--){
        cin >> m;
        vector<vector<int>> grid(m, vector<int>(m));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                cin >> grid[i][j];
            }
        }
        int ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                set<int> s;
                vector<vector<bool>> visited(m, vector<bool>(m, false));
                stack<pair<int, int>> st;
                st.push({i, j});
                s.insert(grid[i][j]);
                while(!st.empty()){
                    int x = st.top().first, y = st.top().second;
                    st.pop();
                    if(!visited[x][y]){
                        visited[x][y] = true;
                        for(int i = 0; i < 4; i++){
                            int new_x = x + move_x[i], new_y = y + move_y[i];
                            if(new_x < 0 || new_y < 0 || new_x >= m || new_y >= m){
                                continue;
                            }
                            if(!visited[new_x][new_y] && !s.count(grid[new_x][new_y])){
                                st.push({new_x, new_y});
                                s.insert(grid[new_x][new_y]);
                            }
                        }
                    }
                }
                ans = max(int(s.size()), ans);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, w, x, y, z;
    cin >> h >> w >> x >> y >> z;
    vector<vector<int>> image(h + 2, vector<int>(w + 2, -1));
    vector<vector<bool>> road(h + 2, vector<bool>(w + 2, false));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> image[i][j];
        }
    }
    int num = image[x][y];
    stack<pair<int, int>> st;
    st.push({x, y});
    while(!st.empty()){
        pair<int, int> temp = st.top();
        st.pop();
        if(road[temp.first][temp.second]){
            continue;
        }
        road[temp.first][temp.second] = true;
        image[temp.first][temp.second] = z;
        if(image[temp.first - 1][temp.second] == num){
            st.push({temp.first - 1, temp.second});
        }
        if(image[temp.first + 1][temp.second] == num){
            st.push({temp.first + 1, temp.second});
        }
        if(image[temp.first][temp.second - 1] == num){
            st.push({temp.first, temp.second - 1});
        }
        if(image[temp.first][temp.second + 1] == num){
            st.push({temp.first, temp.second + 1});
        }
    }
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << image[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

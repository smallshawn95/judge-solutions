#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x, y;
    vector<int> in(n + 1, 0);
    vector<vector<int>> course(n + 1);
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        course[x].push_back(y);
        in[y] += 1;
    }
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(in[i] == 0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int num = q.front();
        q.pop();
        ans.push_back(num);
        for(int i: course[num]){
            in[i] -= 1;
            if(in[i] == 0){
                q.push(i);
            }
        }
    }
    if(ans.size() != n){
        cout << "IMPOSSIBLE\n";
    }else{
        for(int i: ans){
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}

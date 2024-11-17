#include <iostream>
#include <vector>
#include <stack>
using namespace std;

long long r[1000005] = {1};
vector<int> edge[1000005];

void dfs(int cur)
{
    for(int i: edge[cur]){
        if(r[i] == 0){
            dfs(i);
        }
        r[cur] += r[i];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;
        edge[b].push_back(a);
    }
    dfs(n - 1);
    cout << r[n - 1] << '\n';
    return 0;
}

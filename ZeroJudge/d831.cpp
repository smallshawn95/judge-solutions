#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e6 + 5;

int f[N], sz[N];

void init(int n)
{
    for(int i = 0; i < n; i++){
        f[i] = i;
        sz[i] = 1;
    }
}

int find(int x)
{
    if(x == f[x]){
        return x;
    }
    f[x] = find(f[x]);
    return f[x];
}

void merge(int x, int y)
{
    x = find(f[x]);
    y = find(f[y]);
    if(x == y){
        return;
    }
    if(sz[x] < sz[y]){
        swap(x, y);
    }
    sz[x] += sz[y];
    f[y] = x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while(cin >> n >> m){
        init(n);
        while(m--){
            int a, b;
            cin >> a >> b;
            merge(a, b);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(sz[i], ans);
        }
        cout << ans << '\n';
    }
    return 0;
}

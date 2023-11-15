#include <iostream>
#include <vector>
using namespace std;

vector<int> friends;

int find_root(int x)
{
    if(friends[x] == x){
        return x;
    }
    int root = find_root(friends[x]);
    friends[x] = root;
    return root;
}

void connect_line(int x, int y)
{
    int root_x = find_root(x);
    int root_y = find_root(y);
    friends[root_x] = root_y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    friends.resize(n + 1);
    for(int i = 1; i <= n; i++){
        friends[i] = i;
    }
    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        connect_line(a, b);
    }
    for(int i = 0; i < q; i++){
        cin >> a >> b;
        int root_a = find_root(a);
        int root_b = find_root(b);
        if(root_a == root_b){
            cout << ":)\n";
        }else{
            cout << ":(\n";
        }
    }
    return 0;
}

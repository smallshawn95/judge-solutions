#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    vector<vector<char>> dna(h + 2, vector<char>(w + 2, '#'));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> dna[i][j];
        }
    }
    vector<vector<bool>> visited(h + 2, vector<bool>(w + 2, false));
    unsigned long long x = 0, y = 0, z = 1;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(!visited[i][j] && dna[i][j] == '.'){
                unsigned long long sum = 0;
                bool first = true;
                pair<int, int> start = {i, j};
                stack<pair<int, int>> s;
                s.push(start);
                while(!s.empty()){
                    int a = s.top().first, b = s.top().second;
                    s.pop();
                    if(first){
                        first = false;
                    }else{
                        visited[a][b] = true;
                        if(start.first == a && start.second == b){
                            if(sum >= 8){
                                x += 1;
                                y += sum;
                                z *= sum;
                            }
                            break;
                        }
                    }
                    sum += 1;
                    if(!visited[a][b + 1] && dna[a][b + 1] == '.'){
                        s.push({a, b + 1});
                    }else if(!visited[a + 1][b] && dna[a + 1][b] == '.'){
                        s.push({a + 1, b});
                    }else if(!visited[a - 1][b] && dna[a - 1][b] == '.'){
                        s.push({a - 1, b});
                    }else if(!visited[a][b - 1] && dna[a][b - 1] == '.'){
                        s.push({a, b - 1});
                    }
                }
            }
        }
    }
    cout << x << ' ' << y << ' ' << z << '\n';
    return 0;
}
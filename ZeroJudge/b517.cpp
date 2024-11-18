#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<bool> appeared, walked;
vector<vector<bool>> grid;

void dfs(int now)
{
    for(int i = 0; i <= 80; i++){
        if(appeared[i] && grid[now][i] && !walked[i]){
            walked[i] = true;
            dfs(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n >> ws;
    while(n--){
        appeared.resize(85, false);
        walked.resize(85, false);
        grid.resize(85, vector<bool>(85, false));
        int vertex_num = 0, edge_num = 0;
        string side;
        getline(cin, side);
        stringstream ss(side);
        while(ss >> side){
            int a = stoi(side.substr(0, side.find(',')));
            int b = stoi(side.substr(side.find(',') + 1));
            if(!appeared[a]){
                vertex_num += 1;
                appeared[a] = true;
            }
            if(!appeared[b]){
                vertex_num += 1;
                appeared[b] = true;
            }
            grid[a][b] = true;
            grid[b][a] = true;
            edge_num += 1;
        }
        if(edge_num != vertex_num - 1){
            cout << "F\n";
        }else{
            bool not_tree = false;
            for(int i = 0; i <= 80; i++){
                if(appeared[i]){
                    walked[i] = true;
                    dfs(i);
                    break;
                }
            }
            for(int i = 0; i <= 80; i++){
                if(appeared[i] && !walked[i]){
                    not_tree = true;
                    break;
                }
            }
            if(not_tree){
                cout << "F\n";
            }else{
                cout << "T\n";
            }
        }
        appeared.clear();
        walked.clear();
        grid.clear();
    }
    return 0;
}

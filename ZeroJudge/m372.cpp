#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct label{
    char shape;
    int x;
    int y;
};

bool up(char c)
{
    if(c == 'X' || c == 'I' || c == 'F' || c == '7'){
        return true;
    }
    return false;
}

bool down(char c)
{
    if(c == 'X' || c == 'I' || c == 'L' || c == 'J'){
        return true;
    }
    return false;
}

bool left(char c)
{
    if(c == 'X' || c == 'H' || c == 'F' || c == 'L'){
        return true;
    }
    return false;
}

bool right(char c)
{
    if(c == 'X' || c == 'H' || c == '7' || c == 'J'){
        return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> data(n + 2, vector<char>(m + 2, '0'));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> data[i][j];
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(data[i][j] == '0'){
                continue;
            }
            int total = 1;
            stack<label> map_stack;
            map_stack.push({data[i][j], j, i});
            while(!map_stack.empty()){
                label temp = map_stack.top();
                map_stack.pop();
                char c = temp.shape;
                int x = temp.x, y = temp.y;
                data[y][x] = '0';
                switch(c){
                    case 'X':
                        if(up(data[y - 1][x])){
                            total += 1;
                            map_stack.push({data[y - 1][x], x, y - 1});
                            data[y - 1][x] = '0';
                        }
                        if(down(data[y + 1][x])){
                            total += 1;
                            map_stack.push({data[y + 1][x], x, y + 1});
                            data[y + 1][x] = '0';
                        }
                        if(left(data[y][x - 1])){
                            total += 1;
                            map_stack.push({data[y][x - 1], x - 1, y});
                            data[y][x - 1] = '0';
                        }
                        if(right(data[y][x + 1])){
                            total += 1;
                            map_stack.push({data[y][x + 1], x + 1, y});
                            data[y][x + 1] = '0';
                        }
                        break;
                    case 'I':
                        if(up(data[y - 1][x])){
                            total += 1;
                            map_stack.push({data[y - 1][x], x, y - 1});
                            data[y - 1][x] = '0';
                        }
                        if(down(data[y + 1][x])){
                            total += 1;
                            map_stack.push({data[y + 1][x], x, y + 1});
                            data[y + 1][x] = '0';
                        }
                        break;
                    case 'H':
                        if(left(data[y][x - 1])){
                            total += 1;
                            map_stack.push({data[y][x - 1], x - 1, y});
                            data[y][x - 1] = '0';
                        }
                        if(right(data[y][x + 1])){
                            total += 1;
                            map_stack.push({data[y][x + 1], x + 1, y});
                            data[y][x + 1] = '0';
                        }
                        break;
                    case 'J':
                        if(up(data[y - 1][x])){
                            total += 1;
                            map_stack.push({data[y - 1][x], x, y - 1});
                            data[y - 1][x] = '0';
                        }
                        if(left(data[y][x - 1])){
                            total += 1;
                            map_stack.push({data[y][x - 1], x - 1, y});
                            data[y][x - 1] = '0';
                        }
                        break;
                    case 'L':
                        if(up(data[y - 1][x])){
                            total += 1;
                            map_stack.push({data[y - 1][x], x, y - 1});
                            data[y - 1][x] = '0';
                        }
                        if(right(data[y][x + 1])){
                            total += 1;
                            map_stack.push({data[y][x + 1], x + 1, y});
                            data[y][x + 1] = '0';
                        }
                        break;
                    case '7':
                        if(down(data[y + 1][x])){
                            total += 1;
                            map_stack.push({data[y + 1][x], x, y + 1});
                            data[y + 1][x] = '0';
                        }
                        if(left(data[y][x - 1])){
                            total += 1;
                            map_stack.push({data[y][x - 1], x - 1, y});
                            data[y][x - 1] = '0';
                        }
                        break;
                    case 'F':
                        if(down(data[y + 1][x])){
                            total += 1;
                            map_stack.push({data[y + 1][x], x, y + 1});
                            data[y + 1][x] = '0';
                        }
                        if(right(data[y][x + 1])){
                            total += 1;
                            map_stack.push({data[y][x + 1], x + 1, y});
                            data[y][x + 1] = '0';
                        }
                        break;
                }
            }
            if(total > ans){
                ans = total;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
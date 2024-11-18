#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(n, '0'));
    int x, y;
    char c;
    string word;
    while(m--){
        cin >> c >> word >> x >> y;
        int len = word.length();
        switch(c){
            case 'V':
                for(int i = 0; i < len; i++){
                    if(y + i >= n || grid[y + i][x] != '0' && grid[y + i][x] != word[i]){
                        cout << "No\n";
                        return 0;
                    }
                    grid[y + i][x] = word[i];
                }
                break;
            case 'H':
                for(int i = 0; i < len; i++){
                    if(x + i >= n || grid[y][x + i] != '0' && grid[y][x + i] != word[i]){
                        cout << "No\n";
                        return 0;
                    }
                    grid[y][x + i] = word[i];
                }
                break;
        }
    }
    cout << "Yes\n";
    return 0;
}

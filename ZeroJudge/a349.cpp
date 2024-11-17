#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, ram[8], temp[4] = {0};
    for(int i = 0; i < 8; i++){
        cin >> ram[i];
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, c;
        string command;
        cin >> command;
        if(command == "LOAD"){
            cin >> a >> b;
            temp[a] = ram[b];
        }else if(command == "STORE"){
            cin >> a >> b;
            ram[a] = temp[b];
        }else if(command == "ADD"){
            cin >> a >> b >> c;
            temp[a] = temp[b] + temp[c];
        }else if(command == "MOVE"){
            cin >> a >> b;
            temp[a] = temp[b];
        }
    }
    cout << temp[0] << '\n' << ram[0] << '\n';
    return 0;
}
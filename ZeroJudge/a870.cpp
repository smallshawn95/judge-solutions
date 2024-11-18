#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> data;
    string command, x, y;
    while(cin >> command){
        if(command == "SHOW"){
            for(string i: data){
                cout << i << ' ';
            }
            break;
        }else if(command == "ADD"){
            cin >> x;
            data.push_back(x);
        }else if(command == "REMOVE"){
            int i;
            cin >> x;
            for(i = 0; i < data.size(); i++){
                if(data[i] == x){
                    break;
                }
            }
            data.erase(data.begin() + i);
        }else if(command == "INSERT"){
            int i;
            cin >> x >> y;
            for(i = 0; i < data.size(); i++){
                if(data[i] == y){
                    break;
                }
            }
            data.insert(data.begin() + i, x);
        }
    }
    return 0;
}
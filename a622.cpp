#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int max_len = 0;
    string str;
    vector<string> team;
    while(getline(cin, str) && str != "END"){
        team.push_back(str);
        max_len = max(int(str.length()), max_len);
    }
    for(int i = 0; i < max_len; i++){
        for(int j = 0; j < team.size(); j++){
            if(i >= team[j].length()){
                cout << "   ";
            }else{
                cout << team[j][i] << "  ";
            }
        }
        cout << '\n';
    }
    return 0;
}

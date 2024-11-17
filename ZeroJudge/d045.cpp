#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

struct Player{
    int index;
    int total = 0;
    set<int> question;
    vector<int> ans;
};

bool cmp(Player a, Player b)
{
    return a.total > b.total;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, x = 1;
    cin >> t;
    while(t--){
        cout << "Case #" << x++ << ":\n"; 
        int n, num;
        Player data[3];
        for(int i = 0; i < 3; i++){
            data[i].index = i + 1;
            cin >> n;
            for(int j = 0; j < n; j++){
                cin >> num;
                data[i].question.insert(num);
            }
        }
        for(auto i: data[0].question){
            if(!data[1].question.count(i) && !data[2].question.count(i)){
                data[0].total += 1;
                data[0].ans.push_back(i);
            }
        }
        for(auto i: data[1].question){
            if(!data[0].question.count(i) && !data[2].question.count(i)){
                data[1].total += 1;
                data[1].ans.push_back(i);
            }
        }
        for(auto i: data[2].question){
            if(!data[0].question.count(i) && !data[1].question.count(i)){
                data[2].total += 1;
                data[2].ans.push_back(i);
            }
        }
        sort(data, data + 3, cmp);
        int max_num = data[0].total;
        for(int i = 0; i < 3; i++){
            if(data[i].total == max_num){
                cout << data[i].index << ' ' << data[i].total;
                for(int j: data[i].ans){
                    cout << ' ' << j;
                }
            }else{
                break;
            }
            cout << '\n';
        }
    }
    return 0;
}
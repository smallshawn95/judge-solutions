#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> zero(n, 0);
        vector<int> num(n);
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        set<vector<int>> s;
        while(true){
            if(num == zero){
                cout << "ZERO\n";
                break;
            }
            vector<int> temp;
            for(int i = 0; i < n; i++){
                if(i == n - 1){
                    int x = abs(num[0] - num[n - 1]);
                    temp.push_back(x);
                }else{
                    int x = abs(num[i] - num[i + 1]);
                    temp.push_back(x);
                }
            }
            if(s.count(temp)){
                cout << "LOOP\n";
                break;
            }else{
                s.insert(temp);
                num = temp;
            }
        }
    }
    return 0;
}
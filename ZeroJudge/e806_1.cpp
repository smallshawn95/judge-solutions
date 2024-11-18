#include <iostream>
#include <map>
using namespace std;

int main()
{
    pair<int, int> num[1001];
    for(int i = 0; i < 1001; i++){
        num[i] = {i, 0};
    }
    int n, x, y;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        num[x].second += y;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        num[x].second += y;
    }
    bool no = true;
    for(int i = 1000; i >= 0; i--){
        if(num[i].second != 0){
            no = false;
            cout << num[i].first << ':' << num[i].second << '\n';
        }
    }
    if(no){
        cout << "NULL!\n";
    }
    return 0;
}
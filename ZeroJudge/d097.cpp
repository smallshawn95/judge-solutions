#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        int x, y;
        int num[3000] = {0};
        for(int i = 0; i < n; i++){
            if(i == 0){
                cin >> x;
                continue;
            }
            cin >> y;
            num[abs(x - y)] += 1;
            x = y;
        }
        bool yes = true;
        for(int i = 1; i < n; i++){
            if(num[i] == 0){
                yes = false;
                cout << "Not jolly\n";
                break;
            }
        }
        if(yes){
            cout << "Jolly\n";
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> grade(6);
    for(int &i: grade){
        cin >> i;
    }
    for(int i = 0; i < 6; i++){
        int x, ans = -1;
        if(grade[i] == 0){
            ans = -2;
        }
        for(int j = 0; j < 5; j++){
            cin >> x;
            if(ans == -1 && grade[i] >= x){
                ans = j;
            }
        }
        switch(ans){
            case -2:
                cout << "X\n";
                break;
            case 0:
                cout << "A\n";
                break;
            case 1:
                cout << "B\n";
                break;
            case 2:
                cout << "C\n";
                break;
            case 3:
                cout << "D\n";
                break;
            case 4:
                cout << "E\n";
                break;
            case -1:
                cout << "F\n";
                break;
        }
    }
    return 0;
}


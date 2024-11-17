#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, r;
    while(cin >> n >> r){
        int x;
        vector<bool> card(n, false);
        for(int i = 0; i < r; i++){
            cin >> x;
            card[x - 1] = true;
        }
        if(n == r){
            cout << "*\n";
        }else{
            for(int i = 0; i < n; i++){
                if(!card[i]){
                    cout << i + 1 << ' ';
                }
            }
            cout << '\n';
        }
    }
    return 0;
}

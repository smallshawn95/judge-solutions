#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> player(n);
    for(int i = 0; i < n; i++){
        cin >> player[i];
    }
    int x;
    bool out_same = false;
    while(cin >> x && x != 0){
        x -= 1;
        if(player[x] == 2){
            out_same = true;
        }
        player[x] = 2;
    }
    if(out_same){
        cout << "Wrong\n";
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(player[i] == -1){
            cout << "Werewolves\n";
            return 0;
        }
    }
    cout << "Townsfolk\n";
    return 0;
}

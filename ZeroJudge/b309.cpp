#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char c;
    vector<int> servant(7, 0);
    while(cin >> c){
        if(c >= 'A' && c <= 'Z'){
            servant[(c - 'A') % 7] += 1;
        }else if(c >= 'a' && c <= 'z'){
            servant[(c - 'a') % 7] += 1;
        }
    }
    int ans = 0;
    for(int i = 0; i < 7; i++){
        if(servant[i] > servant[ans]){
            ans = i;
        }
    }
    switch(ans) {
        case 0:
            cout << "Saber\n";
            break;
        case 1:
            cout << "Lancer\n";
            break;
        case 2:
            cout << "Archer\n";
            break;
        case 3:
            cout << "Rider\n";
            break;
        case 4:
            cout << "Caster\n";
            break;
        case 5:
            cout << "Assassin\n";
            break;
        case 6:
            cout << "Berserker\n";
            break;
    }
    return 0;
}

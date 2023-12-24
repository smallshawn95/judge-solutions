#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        char x, y;
        cin >> x >> y;
        for(char c = 'a'; c <= 'h'; c++){
            if(c != x){
                cout << c << y << '\n';
            }
        }
        for(char c = '1'; c <= '8'; c++){
            if(c != y){
                cout << x << c << '\n';
            }
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int s, x = 1;
    int q[12], a[12];
    while(cin >> s){
        if(s < 0){
            break;
        }
        for(int i = 0; i < 12; i++){
            cin >> q[i];
        }
        for(int i = 0; i < 12; i++){
            cin >> a[i];
        }
        cout << "Case " << x << ":\n";
        for(int i = 0; i < 12; i++){
            if(s >= a[i]){
                cout << "No problem! :D\n";
                s -= a[i];
            }else{
                cout << "No problem. :(\n";
            }
            s += q[i];
        }
        x += 1;
    }
    return 0;
}
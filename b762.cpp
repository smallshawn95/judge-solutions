#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    int kill = 0, x = 0, y = 0, z = 0;
    string ans;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> ans;
        if(ans == "Get_Kill"){
            x += 1;
            kill += 1;
            if(kill <= 2)
                cout << "You have slain an enemie.\n";
            else if(kill == 3)
                cout << "KILLING SPREE!\n";
            else if(kill == 4)
                cout << "RAMPAGE~\n";
            else if(kill == 5)
                cout << "UNSTOPPABLE!\n";
            else if(kill == 6)
                cout << "DOMINATING!\n";
            else if(kill == 7)
                cout << "GUALIKE!\n";
            else if(kill >= 8)
                cout << "LEGENDARY!\n";
        }
        else if(ans == "Get_Assist")
            y += 1;
        else if(ans == "Die"){
            z += 1;
            cout << (kill < 3 ? "You have been slained." : "SHUTDOWN.") << '\n';
            kill = 0;
        }
    }
    cout << x << "/" << z << "/" << y << '\n';
    return 0;
}

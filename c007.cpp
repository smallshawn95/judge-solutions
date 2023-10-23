#include <iostream>
using namespace std;

int main()
{
    char c;
    bool frist = true;
    while(cin.get(c)){
        if(c == '"'){
            if(frist){
                cout << "``";
                frist = false;
            }else{
                cout << "''";
                frist = true;
            }
        }else{
            cout << c;
        }
    }
    return 0;
}
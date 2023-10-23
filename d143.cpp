#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int a, b;
        for(int i = 1; i <= n; i++){
            cin >> a >> b;
            if(a > b){
                cout << ">\n";
            }else if(a < b){
                cout << "<\n";
            }else{
                cout << "=\n";
            }
        }
    }
    return 0;
}
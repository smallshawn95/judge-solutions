#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        cout << "Case " << i + 1 << ": ";
        string a, b;
        getline(cin, a);
        getline(cin, b);
        if(a == b){
            cout << "Yes\n";
        }else{
            stringstream ss(a);
            string c, temp;
            while(ss >> temp){
                c += temp;
            }
            if(c == b){
                cout << "Output Format Error\n";
            }else{
                cout << "Wrong Answer\n";
            }
        }
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        if(a.length() != b.length()){
            cout << "No\n";
            continue;
        }
        for(int i = 0; i < a.length(); i++){
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
                a[i] = 'i';
            }
            if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'){
                b[i] = 'i';
            }
        }
        if(a == b){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}
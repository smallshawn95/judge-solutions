#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        string str[n];
        for(int i = 0; i < n; i++){
            cin >> str[i];
        }
        for(int i = 0; i < n; i++){
            if(str[i].length() == 3){
                if((str[i][0] == 'o' && str[i][1] == 'n') || 
                   (str[i][0] == 'o' && str[i][2] == 'e') || 
                   (str[i][1] == 'n' && str[i][2] == 'e')){
                    cout << "1\n";
                }else{
                    cout << "2\n";
                }
            }else{
                cout << "3\n";
            }
        }
    }
    return 0;
}
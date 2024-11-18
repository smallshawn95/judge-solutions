#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string x;
    while(cin >> x){
        int len = x.length();
        vector<int> times(26, 0);
        for(int i = 0; i < len; i++){
            if(x[i] >= 'a' && x[i] <= 'z'){
                times[x[i] - 'a'] += 1;
            }else if(x[i] >= 'A' && x[i] <= 'Z'){
                times[x[i] - 'A'] += 1;
            }
        }
        int odd = 0;
        for(int i = 0; i < 26; i++){
            if(times[i] % 2){
                odd += 1;
            }
        }
        if(odd >= 2 || (odd == 1 && len % 2 == 0)){
            cout << "no...\n";
        }else{
            cout << "yes !\n";
        }
    }
}

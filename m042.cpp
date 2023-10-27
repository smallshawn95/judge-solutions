#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    map<char, double> mass = {
        {'C', 12.01},
        {'H', 1.008},
        {'O', 16.00},
        {'N', 14.01}
    };
    int t;
    cin >> t;
    while(t--){
        string str;
        char c;
        int num = 0;
        double sum = 0;
        cin >> str;
        for(int i = 0, len = str.length(); i < len; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                if(num == 0 && i != 0){
                    sum += mass[c];
                }else{
                    sum += mass[c] * num;
                }
                c = str[i];
                num = 0;
            }else{
                num *= 10;
                num += str[i] - '0';
            }
            if(i == len - 1){
                if(num == 0){
                    sum += mass[c];
                }else{
                    sum += mass[c] * num;
                }
            }
        }
        cout << fixed << setprecision(3) << sum << '\n';
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> str;
        int sum = 0, time = 1;
        for(int j = 0; j < str.length(); j++){
            if(str[j] == 'O'){
                sum += time;
                time += 1;
            }else if(str[j] == 'X'){
                time = 1;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
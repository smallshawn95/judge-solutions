#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    vector<int> char_times(26, 0);
    for(char i: str){
        char_times[i - 'A'] += 1;
    }
    for(int i = 0; i < 26; i++){
        if(char_times[i] != 0){
            cout << string(char_times[i], i + 'A');
        }
    }
    cout << '\n';
    return 0;
}
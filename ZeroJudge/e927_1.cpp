#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> char_times(26, 0);
    for(char i: str){
        char_times[i - 'A'] += 1;
    }
    for(int i = 0; i < 26; i++){
        if(char_times[i] != 0){
            for(int j = 0; j < char_times[i]; j++){
                cout << char(i + 'A');
            }
        }
    }
    cout << '\n';
    return 0;
}
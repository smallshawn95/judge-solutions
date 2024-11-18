#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<char, int> data;
    string card, word;
    getline(cin, card);
    getline(cin, word);
    for(char i: word){
        data[i] += 1;
    }
    bool space = false;
    for(char i: card){
        if(i == ' '){
            space = true;
        }else if(data.count(i) && data[i] > 0){
            data[i] -= 1;
            if(space){
                cout << ' ';
                space = false;
            }
            cout << i;
        }else{
            break;
        }
    }
    return 0;
}

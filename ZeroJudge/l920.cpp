#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string now, next;
    cin >> now;
    next = now;
    int len = now.length();
    while(true){
        for(int i = 0; i < len; i++){
            switch(now[i]){
                case 'R':
                    if(now[i + 1] == 'X' && (i + 1 == len - 1 || now[i + 2] != 'L')){
                        next[i + 1] = 'R';
                    }
                    break;
                case 'L':
                    if(now[i - 1] == 'X' && (i - 1 == 0 || now[i - 2] != 'R')){
                        next[i - 1] = 'L';
                    }
                    break;
            }
        }
        if(now == next){
            break;
        }
        now = next;
    }
    cout << now << '\n';
    return 0;
}

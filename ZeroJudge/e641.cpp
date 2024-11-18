#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char a;
    while(cin >> str){
        int temp = 0;
        for(int i = 0; i < str.length(); i++){
            a = str[i];
            if(a == 'B' || a == 'F' || a == 'P' || a == 'V'){
                if(temp != 1){
                    cout << 1;
                    temp = 1;
                }
            }else if(a == 'C' || a == 'G' || a == 'J' || a == 'K' || a == 'Q' || a == 'S' || a == 'X' || a == 'Z'){
                if(temp != 2){
                    cout << 2;
                    temp = 2;
                }
            }else if(a == 'D' || a == 'T'){
                if(temp != 3){
                    cout << 3;
                    temp = 3;
                }
            }else if(a == 'L'){
                if(temp != 4){
                    cout << 4;
                    temp = 4;
                }
            }else if(a == 'M' || a == 'N'){
                if(temp != 5){
                    cout << 5;
                    temp = 5;
                }
            }else if(a == 'R'){
                if(temp != 6){
                    cout << 6;
                    temp = 6;
                }
            }else{
                temp = 0;
            }
        }
        cout << '\n';
    }
    return 0;
}
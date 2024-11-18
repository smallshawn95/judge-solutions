#include <iostream>
using namespace std;

int main()
{
    int key, num = 4, times = 1;
    cin >> key;
    while(true){
        key -= num;
        num = 4 * ++times;
        if(key == 0){
            cout << "Pineapple pen\n";
            break;
        }
        if(key < num){
            if(key <= num * 0.25){
                cout << "Pen\n";
            }else if(key <= num * 0.5){
                cout << "Pineapple\n";
            }else if(key <= num * 0.75){
                cout << "Apple\n";
            }else{
                cout << "Pineapple pen\n";
            }
            break;
        }
    }
    return 0;
}
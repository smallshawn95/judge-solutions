#include <iostream>
using namespace std;

int main()
{
    int num[9];
    while(cin >> num[0]){
        for(int i = 1; i < 9; i++){
            cin >> num[i];
        }
        bool first = true;
        for(int i = 0; i < 9; i++){
            if(num[i] != 0){
                if(first){
                    if(num[i] == -1){
                        cout << "-";
                    }else if(num[i] != 1){
                        cout << num[i];
                    }
                    first = false;
                }else{
                    if(num[i] < -1){
                        cout << " - " << abs(num[i]);
                    }else if(num[i] > 1){
                        cout << " + " << num[i];
                    }else if(num[i] == 1){
                        cout << " + ";
                    }else if(num[i] == -1){
                        cout << " - ";
                    }
                }
                if(i == 7){
                    cout << "x";
                    continue;
                }else if(i == 8){
                    if(num[i] == 1 || num[i] == -1){
                        cout << "1";
                    }
                    break;
                }
                cout << "x^" << 8 - i;
            }
        }
        if(first){
            cout << 0 << '\n';
        }else{
            cout << '\n';
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, num[4], key[4], temp[4];
    while(cin >> key[0] >> key[1] >> key[2] >> key[3]){
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 4; j++){
                temp[j] = key[j];
            }
            int a = 0, b = 0;
            for(int j = 0; j < 4; j++){
                cin >> num[j];
                if(num[j] == temp[j]){
                    a += 1;
                    num[j] = -1;
                    temp[j] = -1;
                }
            }
            for(int j = 0; j < 4; j++){
                if(num[j] != -1){
                    for(int k = 0; k < 4; k++){
                        if(num[j] == temp[k]){
                            b += 1;
                            temp[k] = -1;
                            break;
                        }
                    }
                }
            }
            cout << a << "A" << b << "B\n";
        }
    }
    return 0;
}

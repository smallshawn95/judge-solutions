#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, choice, k = 1;
        cin >> x >> choice;
        int num[x][x];
        for(int i = 0; i < x; i++){
            for(int j = 0; j < x; j++){
                num[i][j] = 0;
            }
        }
        int time = 0, y, z;
        if(choice == 1){
            while(k <= x * x){
                y = time;
                for(int i = 0; i < x; i++){
                    if(num[y][i] == 0){
                        num[y][i] = k++;
                    }
                }
                z = x - 1 - time;
                for(int i = 0; i < x; i++){
                    if(num[i][z] == 0){
                        num[i][z] = k++;
                    }
                }
                y = x - 1 - time;
                for(int i = x - 1; i >= 0; i--){
                    if(num[y][i] == 0){
                        num[y][i] = k++;
                    }
                }
                z = time;
                for(int i = x - 1; i >= 0; i--){
                    if(num[i][z] == 0){
                        num[i][z] = k++;
                    }
                }
                time += 1;
            }
        }else if(choice == 2){
            while(k <= x * x){
                z = time;
                for(int i = 0; i < x; i++){
                    if(num[i][z] == 0){
                        num[i][z] = k++;
                    }
                }
                y = x - 1 - time;
                for(int i = 0; i < x; i++){
                    if(num[y][i] == 0){
                        num[y][i] = k++;
                    }
                }
                z = x - 1 - time;
                for(int i = x - 1; i >= 0; i--){
                    if(num[i][z] == 0){
                        num[i][z] = k++;
                    }
                }
                y = time;
                for(int i = x - 1; i >= 0; i--){
                    if(num[y][i] == 0){
                        num[y][i] = k++;
                    }
                }
                time += 1;
            }
        }
        for(int i = 0; i < x; i++){
            for(int j = 0; j < x; j++){
                cout << setw(5) << num[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}

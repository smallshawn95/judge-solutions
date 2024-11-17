#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int num[n], one[n];
        for(int i = 0; i < n; i++){
            cin >> num[i];
            one[i] = num[i] % 10;
        }
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(one[j] > one[j + 1]){
                    swap(num[j], num[j + 1]);
                    swap(one[j], one[j + 1]);
                }else if(one[j] == one[j + 1]){
                    if(num[j] < num[j + 1]){
                        swap(num[j], num[j + 1]);
                        swap(one[j], one[j + 1]);
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << num[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

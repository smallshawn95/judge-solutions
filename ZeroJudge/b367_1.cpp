#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++){
        bool yes = 1;
        cin >> n >> m;
        int size = n * m, num[size];
        for(int j = 0; j < size; j++){
            cin >> num[j];
        }
        for(int j = 0; j < size; j++){
            if(num[j] != num[size - j - 1]){
                yes = 0;
                break;
            }
        }
        cout << (yes ? "go forward\n" : "keep defending\n");
    }
    return 0;
}

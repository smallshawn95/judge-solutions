#include <iostream>
using namespace std;

int num[100001];

int main()
{
    int n, m;
    while(cin >> n >> m){
        int x, y;
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        for(int i = 0; i < m; i++){
            int sum = 0;
            cin >> x >> y;
            for(int j = x - 1; j < y; j++){
                sum += num[j];
            }
            cout << sum << '\n';
        }
    }
    return 0;
}

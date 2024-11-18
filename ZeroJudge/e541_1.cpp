#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, j, n, q, times = 1;
    while(cin >> n >> q && n != 0){
        int num[n], key;
        for(i = 0; i < n; i++){
            cin >> num[i];
        }
        sort(num, num + n);
        cout << "CASE# " << times++ << ":\n";
        for(i = 0; i < q; i++){
            cin >> key;
            for(j = 0; j < n; j++){
                if(key == num[j]){
                    break;
                }
            }
            if(j < n){
                cout << key << " found at " << j + 1 << '\n';
            }else{
                cout << key << " not found\n";
            }
        }
    }
    return 0;
}
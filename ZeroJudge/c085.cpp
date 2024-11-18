#include <iostream>
using namespace std;

int main()
{
    int z, i, m, l, num[10000], x = 1, k;
    while(cin >> z >> i >> m >> l){
        bool have = 1;
        if(z == 0 && i == 0 && m == 0 && l == 0){
            break;
        }
        int n = 0;
        while(have){
            num[n] = l;
            n += 1;
            l = (z * l + i) % m;
            for(k = 0; k < n; k++){
                if(l == num[k]){
                    have = 0;
                    break;
                }
            }
        }
        cout << "Case " << x << ": " << n - k << '\n';
        x += 1;
    }
}
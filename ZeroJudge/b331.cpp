#include <iostream>
using namespace std;

char s[1000001];
long long a[1000001], x = 1, sum = 0;

int main()
{
    cin >> a[x];
    a[x] %= 10000;
    while(cin >> s[x] >> a[++x]){
        a[x] %= 10000;
    }
    for(int i = x; i >= 1; i--){
        if(s[i] == '*'){
            a[i] *= a[i + 1];
            a[i] %= 10000;
            a[i + 1] = 0;
        }
    }
    for(int i = 1; i <= x; i++){
        sum += a[i];
        sum %= 10000;
    }
    cout << sum << '\n';
    return 0;
}

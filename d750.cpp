#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

bool cmp(int a, int b)
{
    if(a % m > b % m){
        return 0;
    }else if(a % m < b % m){
        return 1;
    }else{
        if(a % 2 && !(b % 2)){
            return 1;
        }else if(!(a % 2) && b % 2){
            return 0;
        }else if(a % 2 && b % 2){
            if(a > b){
                return 1;
            }else{
                return 0;
            }
        }else if(!(a % 2) && !(b % 2)){
            if(a > b){
                return 0;
            }else{
                return 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n >> m){
        if(n == 0 && m == 0){
            cout << "0 0\n";
            break;
        }
        cout << n << ' ' << m << '\n';
        int num[n];
        for(int j = 0; j < n; j++){
            cin >> num[j];
        }
        sort(num, num + n, cmp);
        for(int j = 0; j < n; j++){
            cout << num[j] << '\n';
        }
    }
    return 0;
}
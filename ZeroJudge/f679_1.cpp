#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, q, t;
    cin >> n >> q;
    vector<long long> member(n);
    for(long long &i: member){
        cin >> i;
    }
    sort(member.begin(), member.end());
    while(q--){
        cin >> t;
        bool find = false;
        long long left = 0, right = n - 1;
        while(left <= right){
            long long middle = (left + right) / 2;
            if(t > member[middle]){
                left = middle + 1;
            }else if(t < member[middle]){
                right = middle - 1;
            }else{
                find = true;
                break;
            }
        }
        cout << (find ? "Yes\n" : "No\n");
    }
    return 0;
}

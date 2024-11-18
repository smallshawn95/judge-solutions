#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long x, n, q;
    cin >> n >> q;
    set<long long> member;
    while(n--){
        cin >> x;
        member.insert(x);
    }
    while(q--){
        cin >> x;
        cout << (member.count(x) ? "Yes\n" : "No\n");
    }
    return 0;
}

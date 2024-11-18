#include <iostream>
#include <deque>
using namespace std;

int num[1000005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    while(cin >> n >> k){
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        deque<int> dq;
        for(int i = 0; i < n; i++){
            while(dq.size() && dq.front() <= i - k){
                dq.pop_front();
            }
            while(dq.size() && num[dq.back()] > num[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i == k - 1){
                cout << num[dq.front()];
            }
            if(i > k - 1){
                cout << ' ' << num[dq.front()];
            }
        }
        if(k > n){
            cout << num[dq.front()];
        }
        cout << '\n';
        while(!dq.empty()){
            dq.pop_back();
        }
        for(int i = 0; i < n; i++){
            while(dq.size() && dq.front() <= i - k){
                dq.pop_front();
            }
            while(dq.size() && num[dq.back()] < num[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i == k - 1){
                cout << num[dq.front()];
            }
            if(i > k - 1){
                cout << ' ' << num[dq.front()];
            }
        }
        if(k > n){
            cout << num[dq.front()];
        }
        cout << '\n';
    }
    return 0;
}

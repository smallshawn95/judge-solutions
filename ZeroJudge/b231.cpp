#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first > b.first;
}

int main()
{
    int n;
    while(cin >> n){
        vector<pair<int, int>> book(n);
        for(int i = 0; i < n; i++){
            cin >> book[i].first >> book[i].second;
        }
        sort(book.begin(), book.end(), cmp);
        int total_time = 0, print_time = 0;
        for(int i = 0; i < n; i++){
            total_time = max(total_time, print_time + book[i].first + book[i].second);
            print_time += book[i].first;
        }
        cout << total_time << '\n';
    }
    return 0;
}
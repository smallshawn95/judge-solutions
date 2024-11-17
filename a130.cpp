#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, times = 1;
    cin >> t;
    pair<string, int> website[10];
    while(t--){
        cout << "Case #" << times++ << ":\n";
        int max = 0;
        for(int i = 0; i < 10; i++){
            cin >> website[i].first >> website[i].second;
            if(website[i].second > max){
                max = website[i].second;
            }
        }
        for(int i = 0; i < 10; i++){
            if(website[i].second == max){
                cout << website[i].first << '\n';
            }
        }
    }
    return 0;
}
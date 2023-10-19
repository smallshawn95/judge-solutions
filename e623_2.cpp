#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int key, num = 0, times = 1;
    vector<string> ans;
    while(num < 10001){
        for(int j = 0; j < times; j++){
            ans.push_back("Pen");
            num += 1;
        }
        for(int j = 0; j < times; j++){
            ans.push_back("Pineapple");
            num += 1;
        }
        for(int j = 0; j < times; j++){
            ans.push_back("Apple");
            num += 1;
        }
        for(int j = 0; j < times; j++){
            ans.push_back("Pineapple pen");
            num += 1;
        }
        times += 1;
    }
    cin >> key;
    cout << ans[key - 1] << '\n';
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string str;
        getline(cin, str);
        int num;
        vector<int> nums;
        stringstream ss(str);
        while(ss >> num){
            nums.push_back(num);
        }
        int ans = 0, len = nums.size();
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(i == j){
                    continue;
                }
                ans = max(__gcd(nums[i], nums[j]), ans);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
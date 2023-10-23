#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> num;
    bool factor;
    for(int i = 2; i <= sqrt(2147483647); i++){
        factor = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                factor = false;
                break;
            }		
        }
        if(factor){
            num.push_back(i);
        }
    }
    int n;
    while(cin >> n){
        factor = true;
        for(int i: num){
            int key = sqrt(n);
            if(key < i){
                break;
            }
            if(n % i == 0){
                factor = false;
                break;
            }
        }
        if(factor){
            cout << "質數\n";
        }else{
            cout << "非質數\n"; 
        }
    }
    return 0;
}
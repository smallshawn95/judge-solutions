#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, lb = 0, rb = 0;
    vector<int> x(2005, 0), y(2005, 0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> t;
        y[i] = t * 2;
        if(y[lb] > y[i]){
            lb = i;
        }
        if(y[rb] < y[i]){
            rb = i;
        }
    }
    int middle_y = (y[lb] + y[rb]) / 2;
    int flag = 0;
    for(int i = 0; i < n; i++){
        bool valid = false;
        for(int j = 0; j < n; j++){
            if(x[i] == x[j] && y[i] + y[j] == middle_y * 2 ){
               valid = true;
            }
        }
        if(valid == false){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "failure\n";
    }else{
        cout << "success\n";
    }
    return 0;
}

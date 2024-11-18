#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long long int side[3];
    while(cin >> n){
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < 3; j++){
                cin >> side[j];
            }
            sort(side, side + 3);
            cout << "Case " << i << ": ";
            if(side[0] <= 0 || side[1] <= 0 || side[2] <= 0){
                cout << "Invalid\n";
            }else if(side[0] == side[1] && side[1] == side[2]){
                cout << "Equilateral\n";
            }else if(side[0] == side[1] || side[1] == side[2]){
                cout << "Isosceles\n";
            }else if(side[0] + side[1] > side[2]){
                cout << "Scalene\n";
            }else{
                cout << "Invalid\n";
            }
        }
    }
    return 0;
}
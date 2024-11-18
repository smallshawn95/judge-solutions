#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int num[n], sum = 0;;
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        sum += num[0];
        for(int j = 1; j < n; j++){
            int min = 1000000;
            for(int k = 0; k < j; k++){
                if(abs(num[j] - num[k]) < min){
                    min = abs(num[j] - num[k]);
                }
            }
            sum += min;
        }
        cout << sum << '\n';
    }
    return 0;
}
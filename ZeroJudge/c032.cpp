#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout << "PERFECTION OUTPUT\n";
    while(cin >> num){
        if(num == 0){
            cout << "END OF OUTPUT\n";
            break;
        }else if(num == 1){
            cout << setw(5) << num << "  DEFICIENT\n";
            continue;
        }
        int sum = 1;
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        cout << setw(5) << num;
        if(num == sum){
            cout << "  PERFECT\n";
        }else if(num < sum){
            cout << "  ABUNDANT\n";
        }else{
            cout << "  DEFICIENT\n";
        }
    }
    return 0;
}
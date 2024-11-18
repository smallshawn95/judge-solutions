#include <iostream>
using namespace std;

int main()
{
    int day = 1, S, E, A;
    cin >> S >> E >> A;
    while(A > 0){
        if(S >= E){
            break;
        }
        day += 1;
        if(day % 10 != 0){
            if(day % 10 == 1){
                A -= 1;
            }else if(day % 3 == 1){
                S += S / 3;
            }else{
                S += S / 10;
            }
        }
    }
    if(A == 0){
        cout << "unsalable\n";
    }else{
        cout << day << '\n';
    }
    return 0;
}

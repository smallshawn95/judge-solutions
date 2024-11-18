#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    double ans;
    char english;
    cin >> n >> m >> english;
    if(english == 'T'){
        ans = n - m;
    }else if(english == 'U'){
        ans = (n / 30.9) - m;
    }else if(english == 'J'){
        ans = (n / 0.28) - m;
    }else if(english == 'E'){
        ans = (n / 34.5) - m;
    }
    if(ans < 0){
        cout << "No Money\n";
    }else if(ans < 0.05){
        cout << english << " 0.00" << '\n';
    }else{
        cout << english << ' ' << fixed << setprecision(2) << ans << '\n';
    }
    return 0;
}
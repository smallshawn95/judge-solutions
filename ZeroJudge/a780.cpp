#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    double fo, fe, fa;
    while(cin >> fo >> fe >> fa){
        if(fo == 0 && fe == 0 && fa == 0){
            break;
        }
        double m = fo / fe, ft = fa / m;
        cout << fixed << setprecision(2) << m << ' ';
        cout << fixed << setprecision(2) << ft << '\n';
    }
    return 0;
}

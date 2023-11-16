#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string name;
    double mb, mv;
    while(cin >> name && name != "END"){
        cin >> mb >> mv;
        double bv_color = mb - mv;
        cout << name << ' ';
        cout << fixed << setprecision(2) << bv_color << ' ';
        if(bv_color >= -0.35 && bv_color < -0.25){
            cout << "O\n";
        }else if(bv_color >= -0.25 && bv_color < 0){
            cout << "B\n";
        }else if(bv_color >= 0 && bv_color < 0.25){
            cout << "A\n";
        }else if(bv_color >= 0.25 && bv_color < 0.5){
            cout << "F\n";
        }else if(bv_color >= 0.5 && bv_color < 1){
            cout << "G\n";
        }else if(bv_color >= 1 && bv_color < 1.5){
            cout << "K\n";
        }else if(bv_color >= 1.5 && bv_color < 2){
            cout << "M\n";
        }
    }
    return 0;
}

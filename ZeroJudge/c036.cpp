#include <iostream>
using namespace std;

int main()
{
    float h, u, d, f;
    while(cin >> h >> u >> d >> f){
        if(h == 0){
            break;
        }
        int day = 0;
        float high = 0;
        f = u * (f / 100);
        while(true){
            day += 1;
            high += u;
            if(u > 0){
                u -= f;
            }
            if(u <= 0){
                u = 0;
            }
            if(high > h){
                cout << "success on day " << day << '\n';
                break;
            }
            high -= d;
            if(high < 0){
                cout << "failure on day " << day << '\n';
                break;
            }
        }
    }
    return 0;
}
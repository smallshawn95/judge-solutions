#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    int num[1001] = {0};
    cin >> n;
    while(n--){
        cin >> x >> y;
        num[x] = y;
    }
    cin >> n;
    while(n--){
        cin >> x >> y;
        num[x] += y;
    }
    bool no = true;
    for(int i = 1000; i >= 0; i--){
        if(num[i] != 0){
            no = false;
            cout << i << ':' << num[i] << '\n';
        }
    }
    if(no){
        cout << "NULL!\n";
    }
    return 0;
}
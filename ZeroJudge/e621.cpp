#include <iostream>
using namespace std;

int main()
{
    int N, A, B, C;
    cin >> N;
    while (N--){
        bool parking_space = 0;
        cin >> A >> B >> C;
        for (int i = ++A; i < B; i++){
            if (i % C != 0){
                cout << i << ' ';
                parking_space = 1;
            }
        }
        if (!parking_space)
            cout << "No free parking spaces.";
        cout << '\n';
    }
    return 0;
}
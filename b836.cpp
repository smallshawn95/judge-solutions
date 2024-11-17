#include <iostream>
using namespace std;

int main()
{
    long long int N, M;
    bool ans = 1;
    while(cin >> N >> M){
        long long int number = 0;
        for (int x = 1; x < N; x += M){
            if (M == 0)
                break;
            number += x;
            if (number == N)
                ans = 0;
        }
        if (ans && M != 0)
            cout << "No Stop!!\n";
        else
            cout << "Go Kevin!!\n";
        }
    return 0;
}

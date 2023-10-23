#include <iostream>
using namespace std;

int main()
{
    int N, M;
    while (cin >> N >> M){
        if (N == M)
            cout << M << endl;
        else
            cout << ++M << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a, b, c, d;
    while(cin >> a >> b >> c >> d){
        if(b != c){
            cout << "Error\n";
            continue;
        }
        vector<vector<long long>> x(a, vector<long long>(b)), y(c, vector<long long>(d));
        for(long long i = 0; i < a; i++){
            for(long long j = 0; j < b; j++){
                cin >> x[i][j];
            }
        }
        for(long long i = 0; i < c; i++){
            for(long long j = 0; j < d; j++){
                cin >> y[i][j];
            }
        }
        for(long long i = 0; i < a; i++){
            for(long long j = 0; j < d; j++){
                long long sum = 0;
                for(long long k = 0; k < b; k++){
                    sum += x[i][k] * y[k][j];
                }
                cout << sum << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}

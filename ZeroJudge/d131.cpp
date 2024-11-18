#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n && n != 0){
        cout << setw(3) << n << "! =";
        map<int, int> prime_table;
        for(int i = 2; i <= n; i++){
            bool prime = true;
            for(int j = 2; j < i; j++){
                if(i % j == 0){
                    prime = false;
                    break;
                }
            }
            if(prime){
                prime_table[i] = 0;
            }
        }
    }
    return 0;
}
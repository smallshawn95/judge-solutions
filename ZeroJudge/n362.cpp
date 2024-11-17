#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long x)
{
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0 && isPrime(i) && isPrime(n / i)){
            cout << i << ' ' << n / i << '\n';
            return 0;
        }
    }
    cout << "0 0\n";
    return 0;
}

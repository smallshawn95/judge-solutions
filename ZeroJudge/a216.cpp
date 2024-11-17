#include <iostream>
using namespace std;

int f(int x)
{
    if(x == 1){
        return 1;
    }
    else{
        return x + f(x - 1);
    }
}

int g(int x)
{
    if(x == 1){
        return 1;
    }
    else{
        return f(x) + g(x - 1);
    }
}

int main()
{
    int x;
    while(cin >> x){
        cout << f(x) << ' ' << g(x) << '\n';
    }
    return 0;
}

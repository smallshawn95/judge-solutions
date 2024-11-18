#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string str;
    while (cin >> str){
        for (int i = 0; i < str.size() - 1; i++){
            cout << abs(int(str[i + 1]) - int(str[i]));
        }
        cout << endl;
    }
    return 0;
}

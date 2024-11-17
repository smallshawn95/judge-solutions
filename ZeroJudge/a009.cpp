#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    for (int i = 0; i < input.size(); i++){
        input[i] -= 7;
        cout << input[i];
    }
    return 0;
}

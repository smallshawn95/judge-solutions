#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int num = 1;
    string str;
    while(cin >> str){
        if(str == "#")
            break;
        else{
            cout << "Case " << num << ": ";
            if(str == "HELLO")
                cout << "ENGLISH\n";
            else if(str == "HOLA")
                cout << "SPANISH\n";
            else if(str == "HALLO")
                cout << "GERMAN\n";
            else if(str == "BONJOUR")
                cout << "FRENCH\n";
            else if(str == "CIAO")
                cout << "ITALIAN\n";
            else if(str == "ZDRAVSTVUJTE")
                cout << "RUSSIAN\n";
            else
                cout << "UNKNOWN\n";
            num += 1;
        }
    }
    return 0;
}
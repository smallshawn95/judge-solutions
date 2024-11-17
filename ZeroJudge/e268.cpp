#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l, n;
    cin >> l >> n;
    string x, y;
    map<string, string> word_data;
    for(int i = 0; i < l; i++){
        cin >> x >> y;
        word_data[x] = y;
    }
    int len;
    char a, b;
    string word;
    for(int i = 0; i < n; i++){
        cin >> word;
        len = word.length();
        a = word[len - 1];
        b = word[len - 2];
        if(word_data.count(word)){
            cout << word_data[word] << '\n';
        }else if(a == 'y'){
            if(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'){
                cout << word << "s\n";
            }else{
                for(int i = 0; i < len - 1; i++){
                    cout << word[i];
                }
                cout << "ies\n";
            }
        }else if(a == 'o' || a == 's' || a == 'x'){
            cout << word << "es\n";
        }else if(a == 'h' && (b == 'c' || b == 's')){
            cout << word << "es\n";
        }else{
            cout << word << "s\n";
        }
    }
    return 0;
}

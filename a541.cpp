#include <iostream>
#include <set>
#include <string>
using namespace std;

set<string> words;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n;
    string word;
    for(int i = 0; i < n; i++){
        cin >> word;
        words.insert(word);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> word;
        if(words.count(word)){
            cout << "yes\n";
        }else{
            cout << "no\n";
            words.insert(word);
        }
    }
    return 0;
}

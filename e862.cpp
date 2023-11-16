#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<string, string>> library;
    string book;
    while(getline(cin, book) && book != "END"){
        int by_index = book.find(" by ");
        string title = book.substr(0, by_index);
        string author = book.substr(by_index + 4);
        library.push_back({author, title});
    }
    sort(library.begin(), library.end());
    for(auto i: library){
        cout << i.second << '\n';
    }
    int book_num = library.size();
    map<string, int> books;
    while(cin >> book >> ws){
        if(book == "BORROW"){
            getline(cin, book);

        }else if(book == "RETURN"){
            getline(cin, book);

        }else if(book == "SHELVE"){

        }else if(book == "END"){
            cout << "END\n";
            break;
        }
    }
    return 0;
}

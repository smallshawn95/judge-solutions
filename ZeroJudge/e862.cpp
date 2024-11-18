#include <iostream>
#include <map>
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
    int book_num = library.size();
    map<string, int> books;
    for(int i = 0; i < book_num; i++){
        books[library[i].second] = i;
    }
    vector<bool> borrowed(book_num, false), returned(book_num, false);
    while(cin >> book >> ws && book != "END"){
        int previous = -1;
        if(book == "BORROW"){
            getline(cin, book);
            borrowed[books[book]] = true;
            returned[books[book]] = false;
        }else if(book == "RETURN"){
            getline(cin, book);
            returned[books[book]] = true;
        }else if(book == "SHELVE"){
            for(int i = 0; i < book_num; i++){
                if(returned[i]){
                    if(previous == -1){
                        cout << "Put " << library[i].second << " first\n";
                    }else{
                        cout << "Put " << library[i].second << " after " << library[previous].second << '\n';
                    }
                    borrowed[i] = false;
                    returned[i] = false;
                    previous = i;
                }else if(!borrowed[i]){
                    previous = i;
                }
            }
            cout << "END\n";
        }
    }
    return 0;
}

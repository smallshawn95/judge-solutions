#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> book(m);
    for(int x, i = 0; i < n; i++){
        cin >> x;
        if(x == 0){
            continue;
        }
        book[x - 1] = i + 1;
    }
    for(int i: book){
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}

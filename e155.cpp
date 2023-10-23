#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        queue<int> num;
        if(n == 0){
            break;
        }
        for(int i = 1; i <= n; i++){
            num.push(i);
        }
        cout << "Discarded cards: ";
        for(int i = 1; i < n; i++){
            if(i == (n - 1)){
                cout << num.front();
            }else{
                cout << num.front() << ", ";
            }
            num.pop();
            num.push(num.front());
            num.pop();
        }
        cout << "\nRemaining card: " << num.front() << '\n';
    }
    return 0;
}
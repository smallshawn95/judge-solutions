#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(10), b(10);
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 10; i++){
        cin >> b[i];
    }
    int x = 0, y = 0, sum = 0;
    for(int i = 0; i < 10; i++){
        if(a[i] <= a[x]){
            a = i;
        }
        for(int j = i; j < 10; j++){
            
        }
    }
    return 0;
}

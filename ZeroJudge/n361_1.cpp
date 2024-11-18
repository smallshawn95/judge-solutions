#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> room(10000001, 0);

void create_room()
{
    for(long long i = 1; i < 10000001; i++){
        if(i % 2 == 0 && i % 3 == 0){
            room[i] = 1;
        }else if((i % 10) % 2 == 1 && i % 3 != 0){
            room[i] = 2;
        }else if(int(sqrt(i)) * int(sqrt(i)) == i || (i % 2 == 0 && i % 7 != 0)){
            room[i] = 3;
        }
    }
}

int main()
{
    create_room();
    long long n, k;
    cin >> n;
    while(n--){
        cin >> k;
        cout << room[k] << ' ';
    }
    cout << '\n';
    return 0;
}

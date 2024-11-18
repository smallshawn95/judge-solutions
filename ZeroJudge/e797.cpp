#include <iostream>
using namespace std;

int main()
{
    bool data[10][10], _and[10], _or[10], _xor[10];
    int n, m;
    cin >> n >> m ;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> data[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += data[j][i];
        }
        if(sum == 0){
            _and[i] = 0;
            _or[i] = 0;
        }else if(sum == n){
            _and[i] = 1;
            _or[i] = 1;
        }else{
            _and[i] = 0;
            _or[i] = 1;
        }
        if(sum % 2){
            _xor[i] = 1;
        }else{
            _xor[i] = 0;
        }
    }
    cout << "AND: ";
    for(int i = 0; i < m; i++){
        cout << _and[i] << ' ';
    }
    cout << "\n OR: ";
    for(int i = 0; i < m; i++){
        cout << _or[i] << ' ';
    }
    cout << "\nXOR: ";
    for(int i = 0; i < m; i++){
        cout << _xor[i] << ' ';
    }
    return 0;
}
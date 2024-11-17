#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n && n != 0){
        for(int i = 0; i < 8; i++){
            for(int k = 0; k < n; k++){
                for(int j = 0; j < 8; j++){
                    for(int l = 0; l < n; l++){
                        if(i % 2 == 0){
                            if(j % 2 == 0){
                                cout << '#';
                            }else{
                                cout << '.';
                            }
                        }else{
                            if(j % 2 == 0){
                                cout << '.';
                            }else{
                                cout << '#';
                            }
                        }
                    }
                }
                cout << '\n';
            }
        }
    }
    return 0;
}

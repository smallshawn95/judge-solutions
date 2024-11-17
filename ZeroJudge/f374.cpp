#include <iostream>
using namespace std;

int main()
{
    int N, P;
    cin >> N >> P;
    int x = 1, ans, max_ans = 0;
    while(P > 0){
        int sum = 0;
        for(int i = 0; i < N; i++){
            sum += P % 10;
            P /= 10;
        }
        if(sum >= max_ans){
            ans = x;
            max_ans = sum;
        }
        x += 1;
    }
    cout << ans << ' ' << max_ans << '\n';
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    float day[7], m, a, n, e, M = 0, A = 0, N = 0, E = 0;
    for(int i = 0; i < 7; i++){
        cin >> m >> a >> n >> e;
        day[i] = m + a + n + e;
        M += m;
        A += a;
        N += n;
        E += e;
    }
    float max = 0, ans;
    for(int i = 0; i < 7; i++){
        if(day[i] > max){
            max = day[i];
            ans = i + 1;
        }
    }
    cout << ans << '\n';
    if(M > A && M > N && M > E){
        cout << "morning\n";
    }else if(A > M && A > N && A > E){
        cout << "afternoon\n";
    }else if(N > M && N > A && N > E){
        cout << "night\n";
    }else if(E > M && E > A && E > N){
        cout << "early morning\n";
    }
    return 0;
}
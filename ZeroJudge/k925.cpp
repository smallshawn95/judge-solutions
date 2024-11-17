#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    vector<int> area(n);
    int max_index = 0, end_index;
    for(int i = 0; i < n; i++){
        cin >> area[i];
        if(area[i] > area[max_index]){
            max_index = i;
        }
    }
    cin >> t;
    int now_index = 0;
    while(true){
        t -= area[max_index] - area[now_index];
        cout << t << '\n';
        if(t <= 0){
            break;
        }
        for(int i = now_index + 1; i <= max_index; i++){
            t -= 1;
            now_index += 1;
            if(t == 0){
                break;
            }
        }
        t -= area[max_index] - area[now_index];
        if(max_index == n - 1){
            end_index = n - 1;
            for(int i = n - 1; i > 0; i--){
                if(area[i] < area[end_index]){
                    end_index = i;
                }
            }
            for(int i = now_index - 1; i >= end_index; i--){
                t -= 1;
                now_index -= 1;
                if(t == 0){
                    break;
                }
            }
        }else{
            end_index = max_index + 1;
            for(int i = max_index + 1; i < n; i++){
                if(area[i] > area[end_index]){
                    end_index = i;
                }
            }
        }
    }
    cout << now_index + 1 << '\n';
    return 0;
}

#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        long long num;
        cin >> num;
        cout << "Case #" << i << ": " << num << ' ';
        set<long long> st;
        bool happy;
        while(true){
            long long temp = 0;
            while(num > 0){
                temp += (num % 10) * (num % 10);
                num /= 10;
            }
            if(temp == 1){
                happy = true;
                break;
            }
            if(st.count(temp)){
                happy = false;
                break;
            }else{
                st.insert(temp);
            }
            num = temp;
        }
        if(happy){
            cout << "is a Happy number.\n";
        }else{
            cout << "is an Unhappy number.\n";
        }
    }
    return 0;
}
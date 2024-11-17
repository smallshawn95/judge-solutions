#include <iostream>
#include <string>
using namespace std;

int main()
{
    char english[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int num[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    int ans = 0, temp;
    string str;
    cin >> str;
    for (int i = 0; i < 26; i++){
        if (str[0] == english[i]){
            temp = num[i];
            break;
        }
    }
    ans = (temp / 10) % 10 + (temp % 10) * 9;
    for (int j = 1; j <= 8; j++){
        ans = ans + (str[j] - 48) * (9 - j);
    }
    ans += (str[9] - 48);
    if (ans % 10 == 0){
        cout << "real\n";
    }
    else{
        cout << "fake\n";
    }
    return 0;
}

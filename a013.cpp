#include <iostream>
#include <string>
#include <vector>
using namespace std;

int f(char a)
{
    if(a == 'I'){
        return 1;
    }else if(a == 'V'){
        return 5;
    }else if(a == 'X'){
        return 10;
    }else if(a == 'L'){
        return 50;
    }else if(a == 'C'){
        return 100;
    }else if(a == 'D'){
        return 500;
    }else if(a == 'M'){
        return 1000;
    }
    return 0;
}

int roman_to_int(string s)
{
    vector<int> a;
    for(int i = 0; i < s.size(); i++){
        a.push_back(f(s[i]));
    }
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(i < s.size() - 1 && a[i] < a[i + 1]){
            sum -= a[i];
        }else{
            sum += a[i];
        }
    }
    return sum;
}

string int_to_roman(int num)
{
    int val[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string ans[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int p = 0;
    string res = "";
    while(num){
        int cnt = num / val[p];
        for(int i = 0; i < cnt; i++){
            res += ans[p];
        }
        num -= val[p] * cnt;
        p++;
    }
    return res;
}

int main()
{
    string a, b;
    while(cin >> a){
        if(a == "#"){
            break;
        }
        cin >> b;
        int na = roman_to_int(a), nb = roman_to_int(b);
        if(na == nb){
            cout << "ZERO\n";
        }else{
            cout << int_to_roman(abs(na - nb)) << '\n';
        }
    }
}

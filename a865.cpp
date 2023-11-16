#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<char, int> greek = {
        {'A', 1}, {'B', 2}, {'G', 3}, {'D', 4}, {'E', 5},
        {'#', 6}, {'Z', 7}, {'Y', 8}, {'H', 9}, {'I', 10},
        {'K', 20}, {'L', 30}, {'M', 40}, {'N', 50}, {'X', 60}, 
        {'O', 70}, {'P', 80}, {'Q', 90}, {'R', 100}, {'S', 200},
        {'T', 300}, {'U', 400}, {'F', 500}, {'C', 600}, {'$', 700}, {'W', 800}, {'3', 900}
    };
    string str;
    while(cin >> str && str != "."){
        long long sum = 0;
        for(char i: str){
            sum += greek[i];
        }
        cout << sum << '\n';
    }
    return 0;
}

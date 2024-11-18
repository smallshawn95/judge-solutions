#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Data{
    int index, chinese, total;
};

bool cmp(Data a, Data b)
{
    if(a.total == b.total){
        if(a.chinese == b.chinese){
            return a.index < b.index;
        }else{
            return a.chinese > b.chinese;
        }
    }else{
        return a.total > b.total;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<Data> classmate(n);
    for(int i = 0; i < n; i++){
        int chinese, math, english;
        cin >> chinese >> math >> english;
        classmate[i] = {i + 1, chinese, chinese + math + english};
    }
    sort(classmate.begin(), classmate.end(), cmp);
    for(int i = 0; i < 5; i++){
        cout << classmate[i].index << ' ' << classmate[i].total << '\n';
    }
    return 0;
}

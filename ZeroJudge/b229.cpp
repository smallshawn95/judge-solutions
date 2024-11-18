#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
	vector<unsigned long long> up(n + 1, 0), left(n + 1, 0), right(n + 1, 0);
	up[1] = 1;
    left[1] = 1;
    right[1] = 1;
	for(int i = 2; i <= n; i++){
		up[i] = up[i - 1] + left[i - 1] + right[i - 1];
		left[i] = up[i - 1] + left[i - 1];
		right[i] = up[i - 1] + right[i - 1];
	}
    cout << up[n] + left[n] + right[n] << '\n';
    return 0;
}

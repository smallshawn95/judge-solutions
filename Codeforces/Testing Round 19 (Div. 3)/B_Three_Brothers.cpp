#include <iostream>
#include <vector>

int main()
{
    int a, b;
    std::vector<bool> brothers(3, false);
    std::cin >> a >> b;
    brothers[a - 1] = true;
    brothers[b - 1] = true;
    for(int i = 0; i < 3; i++){
        if(!brothers[i]){
            std::cout << i + 1 << '\n';
            break;
        }
    }
}

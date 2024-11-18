#include <iostream>
#include <string>
using namespace std;

int main()
{
    string music;
    while(cin >> music && music != "*"){
        int times = 0;
        float temp = 0;
        for(int i = 0, len = music.length(); i < len; i++){
            if(music[i] == '/'){
                if(temp == 1){
                    times += 1;
                }
                temp = 0;
            }else{
                switch(music[i])
                {
                    case 'W':
                        temp += 1;
                        break;
                    case 'H':
                        temp += 0.5;
                        break;
                    case 'Q':
                        temp += 0.25;
                        break;
                    case 'E':
                        temp += 0.125;
                        break;
                    case 'S':
                        temp += 0.0625;
                        break;
                    case 'T':
                        temp += 0.03125;
                        break;
                    case 'X':
                        temp += 0.015625;
                        break;
                }
            }
        }
        cout << times << '\n';
    }
    return 0;
}
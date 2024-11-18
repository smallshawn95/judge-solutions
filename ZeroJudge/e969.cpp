#include <iostream>
using namespace std;

int main()
{
    bool choice;
    int money, min, time = 0;
    cin >> money >> min >> choice;
    while(money > 0){
        if(choice == 1){
            money -= 55;
            if(time == 0 && money < 0){
                cout << "Wayne can't eat and drink.\n";
            }else if(money == 0){
                cout << time << ": Wayne drinks a Corn soup, and now he doesn't have money.\n";
            }else if(money > 0){
                cout << time << ": Wayne drinks a Corn soup, and now he has " << money \
                     << (money == 1 ? " dollar.\n" : " dollars.\n");
            }
            time += min;
            choice = 0;
        }else if(choice == 0){
            money -= 32;
            if(time == 0 && money < 0){
                cout << "Wayne can't eat and drink.\n";
            }else if(money == 0){
                cout << time << ": Wayne eats an Apple pie, and now he doesn't have money.\n";
            }else if(money > 0){
                cout << time << ": Wayne eats an Apple pie, and now he has " << money \
                     << (money == 1 ? " dollar.\n" : " dollars.\n");
            }
            time += min;
            choice = 1;
        }
    }
    return 0;
}
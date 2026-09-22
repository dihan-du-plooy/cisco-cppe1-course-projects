#include <iostream>
using namespace std;

int main(void){
    int money;
    int banknote[] = {50, 20, 10, 5, 1};
    cout << "Money = ";
    cin >> money;

    for (int i = 0; i < 5; i++) {
        while (money >= banknote[i]) {
            cout << banknote[i] << " ";
            money -= banknote[i];
        }
    }
    return 0;
}
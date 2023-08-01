#include <iostream>
using namespace std;

int score[] = {
    641, 703, 405, 598, 402,
    254, 710, 467, 530, 548,
    532, 687, 623, 420, 647,
    764, 633, 712, 312, 655,
};

int main () {
    int sum = 0;

    for(int i = 0; i < 40; ++i){
        sum += score[i];
    }

    cout << "Average:" << sum / 20.0 << "point" << endl;
}
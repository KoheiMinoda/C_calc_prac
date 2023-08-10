#include <iostream>
using namespace std;

void WesternToShouwa (int & x) {
    if(1926 <= x && x <= 1989) {
        x -= 1925;
    } else {
        x = 0;
    }
}

void Shouwa() {
    int year;

    cout << "西暦の入力" << flush;
    cin >> year;

    WesternToShouwa(year);
    if (year != 0) {
        cout << "その年は昭和です" << year << "年です" << endl;
    } else {
        cout << "その年は昭和ではない" << endl;
    }
}

int main() {
    Shouwa();
    Shouwa();
}
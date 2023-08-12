#include <iostream>
using namespace std;

void ShowCode (char ch) {
    cout << "[" << ch << "]" << "の番号は" << (int) (unsigned char)ch << endl;
}

int main() {
    ShowCode(0);
}
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        int a, b;

        cout << "first numner" << flush;
        cin >> a;

        cout << "second numner" << flush;
        cin >> b;

        if (b == 0) {
            cout << "error" << endl;
        }        

        cout << a << " / " << b << " = " << a/b << "..." << a % b << endl;
    }

    cout << "end of this program" << endl;
}
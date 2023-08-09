#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        int a, b, op, result;

        cout << "first number" << flush;
        cin >> a;

        cout << "second number" << flush;
        cin >> b;

        cout << "type of calc" << flush;
        cin >> op;

        switch(op) {
        case 1:
            result = a + b;
        case 2:
            result = a - b;
        case 3:
            result = a * b;
        case 4:
            result = a / b;        
        default:
            cout << "error" << endl;
            continue;
        }

        cout << "the answer is" << result << endl;
    }
}
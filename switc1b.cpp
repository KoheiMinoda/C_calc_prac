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

        if(op == 1) {
            result = a + b; 
        } else if (op == 2) {
            result = a - b; 
        } else if (op == 3) {
            result = a * b; 
        } else if (op == 4) {
            result = a / b; 
        } else {
            cout << "error" << endl;
            continue;
        }

        cout << "the answer is" << result << endl;
    }
}
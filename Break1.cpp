#include <iostream>
using namespace std;

int main() {
    for(;;){
        int a, b;

        cout << "first number >" << flush;
        cin >> a;

        cout << "second number >" << flush;
        cin >> b;

        if (b == 0) {
            cout << "error" << endl;
            break;
        }        
    }

    cout << "end of this program" << endl;
}
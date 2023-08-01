#include <iostream>
using namespace std;

// int main () {
//     for(int i=5; i < 10; i+=2){
//         cout << i << " ";
//     }
//     cout << endl;
// }

//あえて何も表示させない
// int main () {
//     for(int i=10000; i < 10; ++i){
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main () {
//      int a = 0;
//     for(int i=0; a < 10; ++i){
//         cout << i << ", " << a << endl;
//         a += 2;
//     }
// }

// int main () {
//      int a = 0;
//     for(; a < 10;){
//         cout << a << ", " << endl;
//         a += 2;
//     }
//     cout << endl;
// }

int main () {
     int a = 0;
    for( ; ; ){
        cout << a << ", ";
        ++a;
    }
    cout << endl;
}
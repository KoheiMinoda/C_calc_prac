//
//  main.cpp
//  Test
//
//  Created by 簑田康平 on 2023/07/29.
//

#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "何か値を入れて >" << flush;
    cin >> a;

    cout << "その値を 3 で割った余りは" << a % 3 << "です" << endl;
}

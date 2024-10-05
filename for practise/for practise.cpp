#include <iostream>
using namespace std;

int main() {

    for (int i = 3; i >= 1; i--) {
        for (int j = 3; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }


    for (int i = 3; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;


    for (int i = 2; i >= 1; i--) {
        for (int j = 3; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }


    cout << "3" << endl;

    for (char i = 'A'; i <= 'D'; i++) {
        for (char j = 'A'; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }


    for (char i = 'A'; i <= 'D'; i++) {
        cout << i << " ";
    }
    cout << endl;


    for (char i = 'C'; i <= 'D'; i++) {
        cout << i << " ";
    }
    cout << endl;


    cout << "D" << endl;




}

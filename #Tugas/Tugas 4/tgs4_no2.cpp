#include <iostream>
using namespace std;

int main() {
    int total = 0;

    for (int i = 1; i <= 10; i++) {
        int bilangan_ganjil = 2 * i - 1;
        total += bilangan_ganjil;
        if (i < 10) {
            cout << bilangan_ganjil << " + ";
        } else {
            cout << bilangan_ganjil << " = " << total << endl;
        }
    }

    return 0;
}


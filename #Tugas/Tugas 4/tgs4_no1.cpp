#include <iostream>
using namespace std;

int main() {
    int total = 0;

    for (int i = 1; i <= 10; i++) {
        int bilangan_genap = 2 * i;
        total += bilangan_genap;
        if (i < 10) {
            cout << bilangan_genap << " + ";
        } else {
            cout << bilangan_genap << " = " << total << endl;
        }
    }

    return 0;
}


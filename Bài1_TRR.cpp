#include <iostream>
using namespace std;

int main() {

    for (int a = 1; a >= 0; --a) {
        for (int b = 1; b >= 0; --b) {
            for (int c = 1; c >= 0; --c) {

                int result = (a & b) | c; // (a và b ) hoac c 
                cout << a << " " << b << " " << c << " |      " << result << endl;
            }
        }
    }

    return 0;
}
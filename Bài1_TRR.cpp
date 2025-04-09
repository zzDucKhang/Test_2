#include <iostream>
using namespace std;

int main() {

    for (int a = 0; a <= 1; ++a) {
        for (int b = 0; b <= 1; ++b) {
            for (int c = 0; c <= 1; ++c) {
                int result = (a & b) | c; // (a và b ) hoac c 
                cout << a << " " << b << " " << c << " |      " << result << endl;
            }
        }
    }

    return 0;
}
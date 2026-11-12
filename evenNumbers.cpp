
#include <iostream>
using namespace std;

int main() {
    for (int i = 60; i >= 20; i -= 2) {
        if (i == 40) {
            cout << "##" << endl;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}

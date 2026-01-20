#include <iostream>
using namespace std;

int main() {
    int a[4] = {1, 2, 3, 4};
    int j = 0;

    for (int i = 0; i < 4; i++) {
        j = j + a[i];
        cout << j << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int a, b, total = 0;
    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        int temp;
        cin >> temp;

        total += temp;
    }

    if (total <= b) {
        cout << "Jebb" << endl;
    }
    else {
        cout << "Neibb" << endl;
    }

    return 0;
}
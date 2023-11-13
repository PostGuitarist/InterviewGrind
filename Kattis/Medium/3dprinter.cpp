#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int days = 0;
    int printers = 1;
    int statues = 0;

    while (statues < n) {
        if (n - statues > printers) {
            printers *= 2;
        } else {
            statues += printers;
        }
        days++;
    }

    cout << days;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int tmp = -1, result = 1, n, x;

    // n = number of elements in the sequence
    // x = current value

    cin >> n;

    // This loop counts the number of times the sequence increases
    for (int i = 0; i < n; i++) {
        cin >> x;

        // If the current value is greater than the previous one, increase the result
        if (x > tmp && tmp != -1) {
            result++;
        }

        // Update tmp to the current value
        tmp = x;
    }
    cout << result << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int b = a / 10;
    int c = a % 10;
    cout << c * 10 + b << endl;

    return 0;
}
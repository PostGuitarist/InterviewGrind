#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    string n = s.substr(0, 3);

    if (n == "555") {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.find("COV") != string::npos) {
        cout << "Veikur!" << endl;
    }
    else {
        cout << "Ekki veikur!" << endl;
    }

    return 0;
}
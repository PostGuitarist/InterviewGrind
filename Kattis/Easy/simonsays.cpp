#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    string simon = "Simon says";

    for (int i = 0; i < t; i++) {
        string d;
        getline(cin, d);

        if (d.find(simon) != string::npos) {
            cout << d.substr(simon.length(), d.length()) << endl;
        }
    }
 
    return 0;
}
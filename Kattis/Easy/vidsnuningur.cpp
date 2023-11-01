#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> word;

    string s, t;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        word.push_back(s[i]);
    }

    for (int i = word.size() - 1; i >= 0; i--) {
        t += word[i];
    }

    cout << t << endl;

    return 0;
}
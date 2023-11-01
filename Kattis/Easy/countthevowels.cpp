#include <iostream>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    
    for (char c : s) {
        count += isVowel(tolower(c));
    }
    
    cout << count;
    
    return 0;
}
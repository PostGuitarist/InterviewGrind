#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    
    for (int i = 1; i <= n; i++) {
        string s;
        if (i % x == 0) {
            s += "Fizz";
        }
        if (i % y == 0) {
            s += "Buzz";
        }
        if (s.length() == 0) {
            cout << i << endl;
        } 
        else {
            cout << s << endl;
        }
    }
    
    return 0;
}
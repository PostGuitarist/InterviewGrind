#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    for (int i = 0; i < y; i++) {
        string s;
        int a;

        cin >> s >> a;

        if (a < x) {
            cout << s << " lokud" << endl;
        }
        else {
            cout << s << " opin" << endl;
        }
    }
 
    return 0;
}
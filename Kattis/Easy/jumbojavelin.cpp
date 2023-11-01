#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        ans += temp;
    }

    ans -= n - 1;

    cout << ans << endl;

    return 0;
}
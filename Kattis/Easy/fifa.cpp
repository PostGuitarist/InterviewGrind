#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int year = 2022 + (n + k - 1) / k;
    cout << year << endl;


    return 0;
}
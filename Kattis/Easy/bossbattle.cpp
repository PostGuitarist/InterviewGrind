#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    n -= 2;
    n = max(n, 1);
    
    cout << n;
}
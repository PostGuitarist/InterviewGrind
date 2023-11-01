#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    bool stopped = true;
    int last = 0;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (stopped) {
            last = x;
            stopped = false;
        }
        else {
            sum = sum + (x - last);
            stopped = true;
        }
    }
    
    if (!stopped) {
        cout << "still running";
    }
    else {
        cout << sum;
    }
    
    return 0;
}
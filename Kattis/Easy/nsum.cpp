#include <iostream>

using namespace std;

int main(){
    int answer = 0, n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        answer += tmp;
    }

    cout << answer << endl;
}
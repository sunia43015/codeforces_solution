#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int position = 0;
        int i = 1;
        while (true) {
            position -= (2 * i - 1);
            if (abs(position) > n) {
                cout << "Sakurako" << endl;
                break;
            }
            i++;
            position += (2 * i - 1);
            if (abs(position) > n) {
                cout << "Kosuke" << endl;
                break;
            }
            i++;
            }
    }
    return 0;
}

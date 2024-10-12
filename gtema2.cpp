#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;

    int j = 0;
    int i = a.size() - 1;
    while (j < i) {
        if (a[j] != a[i]) {
            cout << "no";
            return 0;
        }
        j++;
        i--;
    }

    cout << "yes";
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    string a = "Dragon";
    int n = a.length();

    cout << "The Reversed String is: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i];
    }
    cout << endl;

    return 0;
}

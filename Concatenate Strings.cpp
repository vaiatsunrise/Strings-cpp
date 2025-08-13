
#include <iostream>
using namespace std;

int main() {
    string a, b;

    cout << "Enter String a: ";
    getline(cin, a);

    cout << "Enter String b: ";
    getline(cin, b);

    cout << "The final concatenation is: " << a + b << endl;

    return 0;
}

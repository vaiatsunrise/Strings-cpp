
#include <iostream>
using namespace std;

int main() {
    string myword;
    cout << "Enter your word: ";
    getline(cin, myword);

    int n = myword.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (myword[i] != myword[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << myword << " is a Palindrome" << endl;
    } else {
        cout << myword << " is not a Palindrome" << endl;
    }

    return 0;
}

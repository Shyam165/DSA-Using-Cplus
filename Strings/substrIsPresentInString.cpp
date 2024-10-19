#include <iostream>
#include <string>
using namespace std;

bool isSubstring(string str, string substr) {
    int n = str.length();
    int m = substr.length();

    // Loop through the main string
    for (int i = 0; i <= n - m; i++) {
        int j;

        // Check if the substring matches starting from index i
        for (j = 0; j < m; j++) {
            if (str[i + j] != substr[j])
                break;
        }

        // If we fully traversed the substring, it means a match was found
        if (j == m) {
            return true;
        }
    }
    return false;
}

int main() {
    string str = "Hello, welcome to the world of programming!";
    string substr = "welcome";

    if (isSubstring(str, substr)) {
        cout << "Substring '" << substr << "' is present in the string." << endl;
    } else {
        cout << "Substring '" << substr << "' is not present in the string." << endl;
    }

    return 0;
}

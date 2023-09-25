#include <bits/stdc++.h>
using namespace std;

bool areAllCharactersNumerical(string input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {

    string input;
    int flag = 0;

    
    cin >> input;

   if (areAllCharactersNumerical(input)) {
        cout << "Every character in '" << input << "' is numerical." << std::endl;
    } else {
        cout << "Not all characters in '" << input << "' are numerical." << std::endl;
    }


return 0;
}
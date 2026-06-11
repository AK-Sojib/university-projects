#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    regex str("\"[^\"]*\"");
    regex seq("[0-9]+");
    regex com("//[^\n]*|/\\*.*?\\*/");
    regex reserved("(int|float|char|if|else|while|for|return)");
    regex ident("[a-zA-Z_][a-zA-Z0-9_]*");

    smatch match;
    while (regex_search(input, match, str) || regex_search(input, match, seq) || regex_search(input, match, com) || regex_search(input, match, reserved) || regex_search(input, match, ident)) {
        cout << "Token: " << match.str() << endl;
        input = match.suffix();
    }

    return 0;
}


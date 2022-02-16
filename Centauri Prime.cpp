#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
    // TODO: implement this method to determine the ruler name, given the kingdom.
    string s = kingdom;
    string ch = s.substr(s.size() - 1);
    string ruler = "";
    if (s.length() > 100) {
        exit;
    }
    if (ch == "y") {
        return "nobody";
    }
    if (ch == "a" || ch == "e" || ch == "i" || ch == "o" || ch == "u") {
        return "Alice";
    }
    else {
        return "Bob";
    }
}
int main() {
    int testcases;
    cin >> testcases;
    string kingdom;

    for (int t = 1; t <= testcases; ++t) {
        cin >> kingdom;
        cout << "Case #" << t << ": " << kingdom << " is ruled by "
            << GetRuler(kingdom) << ".\n";
    }
    return 0;
}

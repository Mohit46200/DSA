#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkInclusion(string s1, string s2) {

    if (s1.size() > s2.size()) {
        return false;
    }

    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    // Count characters in s1
    for (char c : s1) {
        freq1[c - 'a']++;
    }

    int windowSize = s1.size();

    // Create the first window
    for (int i = 0; i < windowSize; i++) {
        freq2[s2[i] - 'a']++;
    }

    // Check first window
    if (freq1 == freq2) {
        return true;
    }

    // Slide the window
    for (int i = windowSize; i < s2.size(); i++) {

        // Add new character
        freq2[s2[i] - 'a']++;

        // Remove old character
        freq2[s2[i - windowSize] - 'a']--;

        // Check if frequencies match
        if (freq1 == freq2) {
            return true;
        }
    }

    return false;
}

int main() {

    string s1, s2;

    cout << "Enter s1: ";
    cin >> s1;

    cout << "Enter s2: ";
    cin >> s2;

    if (checkInclusion(s1, s2)) {
        cout << "Permutation exists!" << endl;
    }
    else {
        cout << "Permutation does not exist!" << endl;
    }

    return 0;
}
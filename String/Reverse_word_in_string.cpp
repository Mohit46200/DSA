// Input: s = "the sky is blue"
// Output: "blue is sky the"

// in this question we have to reverse the whole string first using reverse function
// then reverse each word of that string and insert it into the ans 

#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
#include <string>


string reverseWords(string s) {
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        string word = "";

        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;           // i will increase due to this also
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1);
}
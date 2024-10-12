#include <iostream>
#include <sstream> 
using namespace std;

int main() {
    string input, word, longest_word;
    int max_length = 0;
    getline(cin, input);
    stringstream ss(input);
    while (ss >> word) {
        if (word.length() > max_length) {
            max_length = word.length();
            longest_word = word;
        }
    }
    cout << longest_word << endl;
    cout << max_length << endl;

    return 0;
}
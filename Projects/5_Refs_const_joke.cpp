#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> SplitIntoWords(const string& text) {
    vector<string> words;
    string word;
    for (const char c : text) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

int main() {
    //string word_text = ;
    vector<string> words_vector = SplitIntoWords("test search query");
    for (int i = 0; i < words_vector.size(); i++) {
         cout << "[" << words_vector[i] << "] ";
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

vector<string> SplitIntoWords(string text)
{
    vector<string> words;
    string word;
    for (const char c : text)
    {
        if (c == ' ')
        {
            if (!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
        else
        {
            word += c;
        }
    }
    if (!word.empty())
    {
        words.push_back(word);
    }

    return words;
}

set<string> SetText(vector<string> text)
{
    set<string> general;
    for (int i = 0; i < text.size(); i++)
    {
        general.insert(text[i]);
    }
    return general;
}

void FindWords(set<string> key_words, vector<string> words)
{
    for (int i = 0; i < words.size(); i++)
    {
        if (key_words.count(words[i]) == 0)
        {
            cout << '[' << words[i] << ']' << endl;
        }
    }
}

int main()
{
    string text;
    getline(cin, text);
    vector<string> vector_text = SplitIntoWords(text);
    set<string> set_text = SetText(vector_text);

    // Считываем строку-запрос
    string query;
    getline(cin, query);
    vector<string> vector_query = SplitIntoWords(query);

    FindWords(set_text, vector_query);
}
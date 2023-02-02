#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

// Метод формирования массива типа set из vector
set<string> Set_str(vector<string> array1)
{
    set<string> array2;
    for (int i = 0; i < array1.size(); i++)
    {
        array2.insert(array1[i]);
    }
    return array2;
}

// Метод сравнения наличия одинаковых элементов в двух массивах
int CalculateSimilarity(vector<string> first, vector<string> second)
{
    set<string> f = Set_str(first);    
    set<string> save_words;

    int k = 0;
    for (int i = 0; i < second.size(); i++)
    {
        if (f.count(second[i]))
        {
            if (save_words.count(second[i]) == 0) {
                save_words.insert(second[i]);
                k++;
            }            
        }
    }
    return k;
    // верните размер пересечения множеств слов first и second
}

// SplitIntoWords разбивает строку text на слова и возвращает их в виде вектора
// Слово - последовательность непробельных символов,
// разделённых одним или более пробелов.
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

int main()
{
    string query, description;

    getline(cin, query);       // строка запрос
    getline(cin, description); // строка описание

    cout << CalculateSimilarity(SplitIntoWords(query), SplitIntoWords(description)) << endl;
}
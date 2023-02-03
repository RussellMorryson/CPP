#include <map>
#include <iostream>
#include <string>

using namespace std;

map<string, string> BuildReversedMap(const map<string, string>& input_map) {
    map<string, string> output;
    //map<key, value>;
    string key;
    string value;
    
    for (const string [key, value]: input_map) {
        output.insert(value, key);
    }
    return output;
}

int main() {
    map<string, string> test1_input = {{"cat"s, "felis catus"s}, 
                                       {"dog"s, "canis lupus"s}};

    map<string, string> test1_output = {{"felis catus"s, "cat"s}, 
                                        {"canis lupus"s, "dog"s}};

    // Проверяем корректность BuildReversedMap на примере 
    if (BuildReversedMap(test1_input) != test1_output) {
        cout << "BuildReversedMap returned wrong dictionary"s << endl;
    }

    map<string, string> test_2_in = {{"cat", "meow"},
                                    {"cow", "moo"},  
                                    {"dog", "bark"}, 
                                    {"owl", "hoot"}, 
                                    {"tiger", "roar"}};
    map<string, string> test_2_out = {{"bark", " dog"},
                                    {"hoot", " owl"},  
                                    {"meow", "cat"}, 
                                    {"moo", "cow"}, 
                                    {"roar", "tiger"}};
    
    // Добавьте ещё тесты, чтобы убедиться, что ваша функция работает верно
}
#include <map>
#include <iostream>
#include <string>

using namespace std;

void PrintMap(const map <string, string>& in) {
    for (const auto& [k, v]: in) {
        string i = v;
        cout << i;
    }
}

int main () {
    map<string, string> input {{"go", "gogo"}, {"fi", "fifi"}};
    
    PrintMap(input);
}
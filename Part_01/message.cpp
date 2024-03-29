#include <iostream>
#include <string>
#include <format>

using std::cout;
using std::cin;
using std::string;
using std::format;

int main(void)
{
    string word;
    cout << "Write a message: ";
    getline(cin, word);
    cout << format("{}\n", word);
}
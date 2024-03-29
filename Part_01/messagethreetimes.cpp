#include <iostream>
#include <string>
#include <format>

using std::cin;
using std::cout;
using std::string;
using std::format;

int main(void)
{
    string word;
    cout << "Write a message: ";
    getline(cin, word);
    cout << word << "\n";
    cout << word << "\n";
    cout << word << "\n";
}